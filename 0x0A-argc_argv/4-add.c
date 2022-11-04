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

	if (argc == 1)
	{
		sum = 0;
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
