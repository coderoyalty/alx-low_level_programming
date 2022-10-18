#include "main.h"

/**
 * _isalpha - check if c is an alphabet
 * @c: the character to check
 *
 * Return: 1 on success otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
