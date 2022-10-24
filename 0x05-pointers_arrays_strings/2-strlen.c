#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 * Return: the length of the @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length++] != '\0')
		;
	return (length - 1);
}
