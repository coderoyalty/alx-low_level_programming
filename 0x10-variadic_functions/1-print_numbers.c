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
	va_args args;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/* i = 0; specifies the beginning, hence don't */
		/* print the separator */
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
