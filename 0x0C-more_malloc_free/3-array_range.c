#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *mem;
	int i, j = 0;

	if (min > max)
		return (NULL);
	mem = (int *)malloc(sizeof(int) * ((max - min) + 1));

	if (!mem)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		mem[j] = i;
		j++;
	}
	return (mem);

}
