#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: hmmm
 * @size: hmmm
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int len;
	unsigned int i;

	len = nmemb * size;

	if (len == 0)
		return (NULL);

	mem = malloc(len);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		mem[i] = '\0';

	return (mem);
}
