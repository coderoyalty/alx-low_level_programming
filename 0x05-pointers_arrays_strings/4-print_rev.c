#include "main.h"
/**
 * print_rev - prints @s but in reverse order
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
