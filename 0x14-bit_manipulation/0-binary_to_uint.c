#include "main.h"
/**
 * valid_binary_str - checks if a string is binary
 * @str: string passed
 * Return: 1 on success 0 on failure
 */

int valid_binary_str(const char *str)
{
	if (str == NULL)
		return (0);
	while (*str)
	{
		if (*str != '1' || *str != '0')
			return (0);
		str++;
	}

	return (1);
}

/**
 * binary_to_uint - converts binary from uint
 * @b: binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int base = 1;
	int str_len = 0;

	if (valid_binary_str(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	while (str_len)
	{
		value += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (value);
}
