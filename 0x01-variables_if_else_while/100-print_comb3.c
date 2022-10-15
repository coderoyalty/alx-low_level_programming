#include <stdio.h>

/**
 * main - Entry Point
 * Return: Success (0)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		int j;

		for (j = 48; j <= 57; j++)
		{
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