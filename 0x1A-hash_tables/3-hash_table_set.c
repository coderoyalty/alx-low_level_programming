#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to add or update
 * @key: the key, It can not be empty
 * @value: value associated with the key.
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	ul_int hash_index;
	hash_node_t *new_node = NULL;
	hash_node_t *current = NULL;

	if ((key == NULL) || strlen(key) == 0)
		return (0);
	hash_index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[hash_index] == NULL)
	{
		ht->array[hash_index] = new_node;
		return (1);
	}

	current = ht->array[hash_index];

	while (current && current->next != NULL)
		current = current->next;
	current->next = new_node;

	return (1);
}
