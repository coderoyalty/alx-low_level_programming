#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */

int main(void)
{
	int first_char;

	for (first_char = 97; first_char <= 122; first_char++)
	{
		putchar(first_char);
	}
	putchar('\n');
	return (0);
}
