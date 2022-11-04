#include "main.h"

/**
 * main - entry point
 * @argc: argument size
 * @argv: argument array
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
