#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *mem;
	int len1 = 0;
	int len2 = 0;
	int total = 0;
	int i = 0;

	if (s1 != NULL)
	{
		while (*(s1 + len1))
			len1++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + len2))
			len2++;
	}

	total = len1 + len2;

	mem = (char *)malloc((total + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	if (s1 != NULL)
		for (i = 0; i < len1; i++)
			mem[i] = s1[i];
	if (s2 != NULL)
		for (i = 0; i < len2; i++)
			mem[len1 + i] = s2[i];
	mem[total] = '\0';

	return (mem);
}
