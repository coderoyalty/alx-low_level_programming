#include "main.h"
#include <string.h>

#define MAX_SIZE (10240)

/**
 * _strncat - concatenates two strings, except @src is limited by n
 * @dest: first string
 * @src: second string
 * @n: length of string to append
 * Return: pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i = 0;

	/* finds the length of @dest */
	while (dest[length] != '\0')
		length++;

	while (src[i] != '\0' && i < n)
	{
		dest[length++] = src[i++];
	}
	dest[length] = '\0';
	return (dest);
}
