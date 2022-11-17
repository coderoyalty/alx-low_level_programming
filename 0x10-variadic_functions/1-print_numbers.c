#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (!separator || (separator && i == 0))
		{
			printf("%d", va_arg(args, int));
		}
		else
			printf("%s%d", separator, va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
