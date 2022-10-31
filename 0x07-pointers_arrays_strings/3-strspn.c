#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int bytes = 0;

	for (i = 0; s[i]; i++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == s[i])
			{
				bytes++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (bytes);
			}
		}
	}
	return (bytes);
}
