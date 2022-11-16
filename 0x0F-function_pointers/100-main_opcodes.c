#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of argument passed
 * Return: int
 */

int main(int argc, char *argv[])
{
	int bytes, i;

	char *code;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	code = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hx\n", code[i]);
			break;
		}
		printf("%02hx ", code[i]);
	}

	return (0);
}
