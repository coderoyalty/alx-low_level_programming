#include "main.h"
/**
 * print_array - print @n elements of @a
 * @a: an array
 * @n: n elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i; i < n; i++)
	{
		putchar(a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
