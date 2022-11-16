#include "main.h"

/**
 * int_index - searches for an integer
 * @array: int array
 * @size: no. of elements in the array
 * @cmp: pointer to the function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((size <= -1) || !array || !cmp)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
