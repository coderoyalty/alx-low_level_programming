#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: substring to find
 * Return: pointer to the first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, checker = 0;
	char *s = haystack;

	while (*s)
	{
		for (int i = 0; needle[i]; i++)
		{
			if (*(s + i) == needle[i])
			{
				checker = 1;
			}
			else
			{
				needle = 0;
			}
		}
		if (checker == 1)
			return (s + i);
		s++;
	}
	return ('\0');
}
