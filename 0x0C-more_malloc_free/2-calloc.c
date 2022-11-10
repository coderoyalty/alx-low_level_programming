#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int len = nmemb * size;
	unsigned int i = 0;

	if (len == 0)
		return (NULL);
	mem = malloc(len);
	if (!mem)
		return (NULL);

	for (; i < len; i++)
		mem[i] = 0;

	return (mem);
}
