#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (comma)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			if (comma == 0)
				comma = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
