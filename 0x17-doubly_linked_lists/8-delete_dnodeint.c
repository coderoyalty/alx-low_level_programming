#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	del = *head;

	if (index == 0)
	{
		*head = del->next;
		if (del->next != NULL)
		{
			del->next->prev = NULL;
		}
		free(del);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (del->next == NULL)
			return (-1);
		del = del->next;
	}
	del->prev->next = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	free(del);
	return (1);
}
