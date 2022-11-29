#include "lists.h"
/**
 * add_node - add a node to the list
 * @head: pointer to the first node
 * @str: element to add
 * Return: element added
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	list_t *new_node;
	int len = 0;

	duplicate = strdup(str);
	if (duplicate == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (len = 0; str[len];)
		len++;
	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
