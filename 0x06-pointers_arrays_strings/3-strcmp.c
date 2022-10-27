#include "main.h"

/**
 * _strcmp - compares s1 and s2
 * @s1: first string
 * @s2: second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	const char *x = s1;
	const char *y = s2;

	while (*x)
	{
		if (*x != *y)
		{
			break;
		}

		x++;
		y++;
	}
	return (*(const unsigned char *)x - *(const unsigned char *)y);
}
