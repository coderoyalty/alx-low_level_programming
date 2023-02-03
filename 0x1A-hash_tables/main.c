#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "dram", "cool1");
    hash_table_set(ht, "dram", "cool2");
    hash_table_set(ht, "vivency", "cool3");

    ul_int key = key_index("dram", 1024);

    hash_node_t *node = ht->array[key];
    int counter = 0;
    printf("%lu\n", key);
    while (node)
    {
	    printf("'%s':'%s' counter=%d\n", node->key, node->value, counter++);
	    node = node->next;
    }

    return (EXIT_SUCCESS);
}
