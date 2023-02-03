#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to look for.
 * Return: NULL if key isn't found, other the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	ul_int hash_index;
	hash_node_t *node;

	if (!ht)
		return (NULL);
	if (!key || strlen(key) == 0)
		return (NULL);
	hash_index = key_index((unsigned char *)key, ht->size);
	node = ht->array[hash_index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
