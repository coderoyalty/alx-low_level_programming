#include "lists.h"

/**
 * list_len - returns list of element in list
 * @h: head of the list
 * return: length of element in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}
