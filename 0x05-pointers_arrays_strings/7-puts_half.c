#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int  n;

	length = strlen(str);

	n = length / 2;
	if (length % 2 != 0)
		n++;

	while (n < length)
	{
		putchar(str[n++]);
	}
	putchar('\n');
}
