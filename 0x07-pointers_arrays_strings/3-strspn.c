#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == str[i])
			{
				bytes++;
				break;
			}
			else if (accept[j+1] == '\0')
			{
				return (bytes);
			}
		}
	}
	return (bytes);
}
