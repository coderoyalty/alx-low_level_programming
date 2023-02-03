#include "hash_tables.h"

/**
 * init_hashnode - method to create an hashnode
 * @key: node key
 * @value: node value
 * Return: NULL or hashnode
 */
hash_node_t *init_hashnode(const char *key, const char *value)
{
	hash_node_t *hashnode;

	hashnode = malloc(sizeof(hash_node_t));
	if (!hashnode)
		return (NULL);
	hashnode->key = strdup(key);
	hashnode->value = strdup(value);
	hashnode->next = NULL;

	return (hashnode);
}

/**
 * free_hashnode - method to delete @node
 * @node: node to delete
 */
void free_hashnode(hash_node_t *node)
{
	if (!node)
		return;
	free(node->key);
	free(node->value);
	free(node);
}

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

	if (!ht)
		return (0);
	if ((key == NULL) || strlen(key) == 0)
		return (0);
	hash_index = key_index((unsigned char *)key, ht->size);
	new_node = init_hashnode(key, value);
	if (!new_node)
		return (0);
	if (ht->array[hash_index] == NULL)
	{
		if (!new_node)
			return (0);
		ht->array[hash_index] = new_node;
		return (1);
	}

	current = ht->array[hash_index];
	/* if key exists, replace the value*/
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			free_hashnode(new_node);
			return (1);
		}
		current = current->next;
	}
	/* if key does not exist, add it the front of the list*/
	new_node->next = ht->array[hash_index];
	ht->array[hash_index] = new_node;
	return (1);
}
