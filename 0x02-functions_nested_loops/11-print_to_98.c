#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98 :)
 * @n: from?
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
