#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chrs and initializes it with @c
 * @size: size to allocate
 * @c: specific char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *dynamic_array = (char *)malloc(size * sizeof(char));
	int i;

	if (size == 0 || !dynamic_array)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		dynamic_array[i] = c;
	return (dynamic_array);
}
