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
		if (val == (int)('q') || val == (int)('e'))
		{
			continue;
		}
		putchar(val);
	}
	putchar('\n');
	return (0);
}
