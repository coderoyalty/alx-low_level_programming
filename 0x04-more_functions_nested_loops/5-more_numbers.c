#include "main.h"

/**
 * print_most_numbers - do something
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;
	int counter;

	for (i = 0; i < 10; i++)
	{
		counter = 0;
		while (counter <= 14)
		{
			if (counter >= 10)
			{
				_putchar((counter / 10) + '0');
			}
			_putchar((counter % 10) + '0');
			++counter;
		}
		_putchar('\n');
	}
}
