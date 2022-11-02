#include "main.h"

/**
 * factorial - returns the factorial of @n
 * @n: number
 * Return: int
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
