#include "main.h"

/**
 * factorial - returns the factorial of @n
 * @n: number
 * Return: int
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
