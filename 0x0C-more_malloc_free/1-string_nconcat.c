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
	int len1 = 0;
	int len2 = 0;
	int total = 0;
	int i = 0;

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
		mem[i] = s1[i++];
	i = 0;
	if (n > len2)
		n = len2;
	while (s2 && i < n)
		mem[len1 + i] = s2[i++];
	mem[total - 1] = '\0';

	return (mem);
}
