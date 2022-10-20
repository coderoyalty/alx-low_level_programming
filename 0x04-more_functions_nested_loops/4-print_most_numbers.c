#include "main.h"

/**
 * print_most_numbers - do something
 * Return: nothing
 */
void print_most_numbers(void)
{
	int ch;

	ch = '0';
	while (ch >= '0' && ch <= '9')
	{
		if (ch == '2' || ch == '4')
		{
			ch++;
			continue;
		}
		_putchar(ch++);
	}
	_putchar('\n');
}
