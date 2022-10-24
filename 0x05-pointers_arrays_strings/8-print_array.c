#include "main.h"
/**
 * print_array - print @n elements of @a
 * @a: an array
 * @n: n elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", (a[i]));
		if (i != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
