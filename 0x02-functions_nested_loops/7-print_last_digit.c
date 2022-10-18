#include "main.h"

/**
 * print_last_digit - print the last digit of n
 * @n: number
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int abs_val = 0;
	char last_digit = 0;

	abs_val = n < 0 ? n * -1 : n;

	last_digit = abs_val % 10;

	if (last_digit == 0)
	{
		last_digit = '0';
	}

	_putchar(last_digit);
	return (last_digit);
}
