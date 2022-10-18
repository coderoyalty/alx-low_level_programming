#include "main.h"

/**
 * print_sign - prints if n is + or -
 * @n: number to check
 *
 * Return: 1 if zero -1 if negative otherwise 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
