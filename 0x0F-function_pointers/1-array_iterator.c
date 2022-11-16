#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to an array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i = 0;

	if (!array || (size < 0) || !action)
		return;
	for (; i < size; i++)
		action(array[i]);
}
