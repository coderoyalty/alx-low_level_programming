#include "main.h"

/**
 * _memset - fills the first @n bytes of the memory area pointed
 * to by @s with the const byte @b
 * @s: memory area pointed to
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *mem = s;
	char value = b;

	for (i = 0; i < n; i++)
		mem[i] = value;

	return (mem);
}
