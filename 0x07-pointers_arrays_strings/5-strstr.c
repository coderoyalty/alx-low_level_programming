#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: substring to find
 * Return: pointer to the first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *s = haystack, *p = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ == *needle++)
			{
				break;
			}	
		}
		if (!*needle)
			return (s);
		needle = p;
		s++;
		haystack = s;
	}
	return ('\0');
}
