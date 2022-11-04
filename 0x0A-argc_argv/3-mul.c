#include "main.h"

/**
 * main - Entry point
 * @argc: argument size
 * @argv: argument array
 * Return: int
 */
int main(int argc, char **argv)
{
	int sum = 1;
	int num;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum *= num;
	}
	printf("%d\n", sum);
	return (0);
}
