#include "main.h"

/**
 * print_last_digit - print the last digit of n
 * @n: number
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	n %= 10;
	n = n < 0 ? -n : n;
	_putchar(n + '0');
	return (n);
}
