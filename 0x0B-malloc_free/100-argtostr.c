#include "main.h"

/**
 * argstostr - concatenate all the arguments
 * @ac: no. of argument passed
 * @av: array of argument passed
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	char *mem;
	int i, j, k;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	mem = (char *)malloc(sizeof(char) * (len + 1));
	if (!mem)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			mem[k++] = av[i][j];
		mem[k++] = '\n';
	}

	return (mem);
}
