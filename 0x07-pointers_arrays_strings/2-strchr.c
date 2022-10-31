#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string passed
 * @c: char passed
 * Return: pointer to the first occurence or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *str = s;

	for (i = 0; str[i] >= '\0'; i++)
	{
		if (str[i] == c)
			return (str + i);
	}

	return ('\0');
}
