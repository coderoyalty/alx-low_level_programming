#include "main.h"
#include <string.h>

#define MAX_SIZE (10240)

/**
 * _strncpy - copy @n of @src in @dest
 * @dest: destination
 * @src: string to copy
 * @n: length of string to copy
 * Return: pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
