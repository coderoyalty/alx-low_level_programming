#include "search_algos.h"
/**
 * print_arr - prints an arr from lower, upper.
 * @arr: array to print from.
 * @lower: from,
 * @upper: to,
 */
void print_arr(int *arr, int lower, int upper)
{
	int i;

	printf("Searching in array: ");
	for (i = lower; i <= upper; i++)
	{
		printf("%d", arr[i]);
		if (i != upper)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - binary search algorithm implementation
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: index where value is located or -1 indicating error.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int mid = 0;
	int current = 0;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		print_arr(array, left, right);
		mid = (left + right) / 2;
		current = array[mid];
		if (current > value)
		{
			right = mid - 1;
			continue;
		}
		else if (current < value)
		{
			left = mid + 1;
			continue;
		}
		else if (current == value)
		{
			return (mid);
		}
	}

	return (-1);
}
