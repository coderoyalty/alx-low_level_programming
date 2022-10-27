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
	int i = 0, j = 0;
	char ch;

	while (str[j] != '\0')
	{
		for (; i < 5; i++)
		{
			ch = lower[i];
			if (str[j] == ch || str[j] == ch - 32)
			{
				str[j] = leet[i];
				break;
			}
		}
		j++;
	}
	return (str);
}
