#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: integer pointer
 * @n: array of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	for (i = 0; i < --n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
