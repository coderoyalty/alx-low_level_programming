#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: grid width size
 * @height: grid height size
 * Return: pointer to pointer.
 */
int **alloc_grid(int width, int height)
{
	int *mem;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = (int *)malloc(sizeof(int) * width * height);
	if (!mem)
		return (NULL);

	for (i = 0; i < width * height; i++)
		mem[i] = 0;
	return (&mem);
}
