#include "main.h"

/**
 * _strcpy - copies @src into @dest
 * @dest: where to copy to
 * @src: where to copy from
 * Return: the pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len + 1) = '\0';
	return (dest);
}
