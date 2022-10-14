#include <stdio.h>

/**
 * main - Entry Point
 * Return: Success (0)
 */

int main(void)
{
	int val;

	for (val = 97; val <= 122; val++)
	{
		putchar(val);
	}
	for (val = 65; val <= 90; val++)
	{
		putchar(val);
	}
	putchar('\n');
	return (0);
}
