#include "main.h"

/**
 * print_diagonal - prints diagonal on the screen
 * @n: length of diagonal
 */

void print_diagonal(int n)
{
	int len;
	int no_spaces;

	for (len = 0; len < n; len++)
	{
		no_spaces = 0;
		while (no_spaces <= len)
		{
			no_spaces++;
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
