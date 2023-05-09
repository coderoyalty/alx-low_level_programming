#include "search_algos.h"

/**
 * linear_search - implementation of  the linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array.
 * @value: value to search for.
 * Return: index where value is located or -1 indicating error.
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	int valueAtIndex;

	if (array == NULL)
		return (-1);
	for (index = 0; index < (int)size; index++)
	{
		valueAtIndex = array[index];
		printf("Value checked array[%d] = [%d]\n", index, valueAtIndex);
		if (valueAtIndex == value)
			return (index);
	}
	/* at this point, value is not found */
	return (-1);
}
