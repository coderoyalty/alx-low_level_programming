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
	unsigned int i;

	if (nmemb == 0 || nmemb == 0) 
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}
