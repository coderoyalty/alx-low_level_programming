#include "main.h"

/**
 * power - function to calculate the exponential of a base
 * @base: base.
 * @exp: exponent.
 * Return: base ^ exponent.
 */

unsigned int power(unsigned int base, unsigned int exp)
{
	if (exp == 0)
		return (1);
	return (base * power(base, exp - 1));
}

/**
 * binary_to_uint - function to convert from binary to
 * decimal.
 * @b: binary buffer.
 * Return: return decimal value of binary buffer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val  = 0;
	unsigned int len = 0;
	unsigned int i = 0;
	unsigned int val = 0;

	if (b == (void *)0)
		return (0);
	/**
	 * length of the binary buffer.
	 */
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			i += 1;
		else
			return (0);
	}
	len = i;
	i = 0;
	/**
	 * convert from binary to decimal
	 * using this: (2 ^ (n - 1) * b[i])
	 */
	for (i = 0; i < len; i++)
	{
		val = b[i] == '0' ? 0 : 1;
		val = power(2, len - (i + 1)) * val;
		decimal_val += val;
	}
	return (decimal_val);
}
