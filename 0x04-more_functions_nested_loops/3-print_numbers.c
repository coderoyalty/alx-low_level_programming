#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int ch;

	ch = '0';
	while (ch >= '0' && ch <= '9')
	{
		_putchar(ch++);
	}
	_putchar('\n');
}
