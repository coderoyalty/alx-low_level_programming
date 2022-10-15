#include <stdio.h>

/**
 * main - Entry Point
 * Return: Success (0)
 */
int main(void)
{
	int i, j;

	for (i = 49; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
