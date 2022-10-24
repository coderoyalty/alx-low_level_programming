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
	n = length % 2 == 0 ? length / 2 : (length - 1) / 2;

	while (n < length)
	{
		putchar(str[n++]);
	}
	putchar('\n');
}
