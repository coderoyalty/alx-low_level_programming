#include "main.h"

/**
 * print_triangle - do something
 * @size: size
 * Return: nothing
 */

void print_triangle(int size)
{
	int counter;
	int i, j;
	int size_diff = size - 1;

	for (counter = 0; counter < size; counter++)
	{
		/*number of spaces*/
		for (i = 0; i < size_diff; i++)
		{
			_putchar(' ');
		}
		for (j = 0; j < (size - size_diff); j++)
		{
			_putchar('#');
		}

		size_diff = size_diff > 0 ? size_diff - 1 : 0;

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
}
