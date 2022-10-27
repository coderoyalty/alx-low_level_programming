#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: char pointer
 */
char *cap_string(char *str)
{
char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};
	int i = 1, j = 0;
	int val = 0; /*acts as a boolean*/
	char ch;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	while (str[i] != '\0')
	{
		ch = str[i];
		if (ch >= 'a' && ch <= 'z')
		{
			ch = str[i - 1];
			val = 0;
			j = 0;
			while (val == 0 && j < 13)
			{
				if (ch == s[j])
					val = 1;
				j++;
			}
			if (val == 1)
				str[i] -= 32;
		}

		i++;
	}

	return (str);
}
