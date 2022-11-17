#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: size of parameter given
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
