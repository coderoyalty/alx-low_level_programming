#include "lists.h"

/**
 * add_node_end - add a node to the end
 * @head: pointer to the first node
 * @str: string to duplicate
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupl;
	list_t *new_node, *curr;
	int len;

	dupl = strdup(str);
	if (dupl == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;
	new_node->str = dupl;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new_node;
	}
	return (*head);
}
