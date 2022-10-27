#include "main.h"

/**
 * leet - encodes @str into 1337
 * @str: string
 * Return: char pointer
 */
char *leet(char *str)
{
	char leet[] = {'4', '3', '0', '7', '1'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	int i = 0, j = 0;
	char ch;

	while (str[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			ch = lower[i];
			if (str[j] == ch || str[j] == upper[i])
			{
				str[j] = leet[i];
			}
		}
		j++;
	}
	return (str);
}
