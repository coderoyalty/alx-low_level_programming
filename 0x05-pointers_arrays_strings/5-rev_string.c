#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	char temp[100];
	int length = strlen(s);
	int i, j = 0;

	strcpy(s, temp);
	for (i = length - 1; i >= 0; i--)
	{
		s[j++] = temp[i];
	}
}
