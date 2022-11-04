#include "main.h"

/**
 * main - Entry point
 * @argc: argument size
 * @argv: argument array
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;
	int num;
	int j;
	char c;

	if (argc == 1)
	{
		sum = 0;
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				c = argv[i][j];
				if (c < 48 || c > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			if (num >= 0)
				sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
