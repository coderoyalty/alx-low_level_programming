#include "main.h"

/**
 * _abs - absolute value of n
 * @n: number to check
 *
 * Return: always positive
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
