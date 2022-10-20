#include "main.h"

/**
 * print_line - draws a line across the screen
 * @n: length of line
 * Return: nothing
 */

void print_line(int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
