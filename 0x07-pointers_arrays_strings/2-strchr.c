#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string passed
 * @c: char passed
 * Return: pointer to the first occurence or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *str = s;

	while (*str != c || *str != '\0')
	{
		str++;
	}

	return (str);
}
