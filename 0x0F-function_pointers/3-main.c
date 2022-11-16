#include "3-calc.h"

/**
 * main - entry point
 * @argc: no. of command args
 * @argv: array containing each command args
 * Return: int
 */
int main(int argc, char **argv)
{
	int rhs, lhs;
	char operand;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	rhs = atoi(argv[1]);
	operand = *argv[2];
	lhs = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}

	/* remember it impossible to divide by 0 */
	if ((operand == '/' || operand == '%') && lhs == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op_func(rhs, lhs));

	return (0);
}
