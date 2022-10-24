#include "main.h"
#include <math.h>

/**
 * pow - hmm
 * @v: v
 * @p: p
 * Return: int
 */
int pow(int v, int p)
{
	int val = v;

	while (p)
	{
		val *= v;
		p--;
	}
	return (val);
}

/**
 * _atoi - converts @s to integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int len = strlen(s) - 1;
	int val = 0;
	char c;

	if (s[i] == '+')
	{
		len -= 1;
		i++;
	}
	else if (s[i] == '-')
	{
		sign = -1;
		len -= 1;
		i++;
	}

	while (*(s + i) != '0')
	{
		c = *(s + i);

		if (!((c >= '0') && (c <= '9')))
			return (-1);

		val += (c - '0') * pow(10, len);
		len -= 1;
		i++;
	}

	return (val * sign);
}
