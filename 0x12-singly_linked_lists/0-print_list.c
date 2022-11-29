#include "lists.h"

/**
 * print_list - prints all the element of a list
 * @h: head node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		if (curr->str != NULL)
		{
			printf("[%d] %s\n", curr->len, curr->str);
		}
		else
			printf("[0] (nil)\n");
		curr = curr->next;
		count++;
	}

	return (count);
}
