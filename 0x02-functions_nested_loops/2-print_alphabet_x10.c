#include "main.h"

/**
 * print_alphabet_x10 - print lowercase letters 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char alp = 'a';
	int counter = 0;

	while (counter < 10)
	{
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
		counter++;
	}
}
