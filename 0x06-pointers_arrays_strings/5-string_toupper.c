#include "main.h"

/**
 * string_toupper - converts @str to uppercase
 * @str: string to convert
 * Return: char pointer to the @str
 */
char *string_toupper(char *str)
{
	int i = 0;
	char c = str[i];

	while (c != '\0')
	{
		if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
		}
	}
	return (c);
}
