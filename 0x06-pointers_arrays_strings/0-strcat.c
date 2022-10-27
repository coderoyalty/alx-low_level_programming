#include "main.h"
#include <string.h>

#define MAX_SIZE (10240)

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	/* finds the length of @dest */
	while (*(dest + length) != '\0')
		length++;

	for (i = 0; src[i] != '\n'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
