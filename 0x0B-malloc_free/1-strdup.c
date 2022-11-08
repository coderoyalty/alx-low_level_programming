#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string given
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *mem;
	int len = 0;
	int i;

	if (!str)
		return (NULL);
	while (*(str + len))
		++len;
	mem = (char *)malloc(sizeof(char) * len);

	if (!mem)
		return (NULL);

	for (i = 0; i < len; i++)
		mem[i] = str[i];

	return (mem);
}
