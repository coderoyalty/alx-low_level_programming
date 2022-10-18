#include "main.h"

/**
 * _islower - check if c is lowercase
 * @c: the character to check
 * Return: 1 on success, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
