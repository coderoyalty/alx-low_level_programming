#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: something
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int total = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		total = len1 + n + 1;
	else
		total = len1 + len2 + 1;
	
	mem = (char *)malloc(total * sizeof(char));
	
	if (!mem)
		return (NULL);

	while (s1 && i < len1)
	{
		mem[i] = s1[i];
		i++;
	}
	
	while (n < len2 && i < (len1 + n))
	{
		mem[i++] = s2[j++];
	}

	while (n >= len2 && i < (len1 + len2))
	{
		mem[i++] = s2[j++];
	}

	mem[i] = '\0';

	return (mem);
}
