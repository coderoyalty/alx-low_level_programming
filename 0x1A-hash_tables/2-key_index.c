#include "hash_tables.h"

/* ul_int -- unsigned long int, its defined in "hash_tables.h" */


/**
 * key_index - function that gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index a which the key/value pair should be stored in
 * the array of the hash table.
 */
ul_int key_index(const unsigned char *key, ul_int size)
{
	ul_int hash_index;

	hash_index = hash_djb2(key);

	return (hash_index % size);
}
