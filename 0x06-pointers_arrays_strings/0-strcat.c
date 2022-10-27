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
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\n'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
