#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
