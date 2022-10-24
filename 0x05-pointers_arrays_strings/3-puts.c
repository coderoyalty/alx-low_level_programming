#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string including a newline
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int length = 0;
	char c = str[length];

	while (c != '\0')
	{
		putchar(c);
		c = str[++length];
	}
	putchar('\n');
}
