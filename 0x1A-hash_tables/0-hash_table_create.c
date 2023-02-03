#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table array
 * Return: pointer to a newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int i = 0;

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);
	new_ht->size = size;
	new_ht->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!(new_ht->array))
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < new_ht->size; i++)
	{
		new_ht->array[i] = NULL;
	}
	return (new_ht);
}
