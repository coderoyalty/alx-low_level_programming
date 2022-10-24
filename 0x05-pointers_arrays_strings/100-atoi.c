#include "main.h"

/**
 * _pow - hmm
 * @v: v
 * @p: p
 * Return: int
 */
int _pow(int v, int p)
{
	int val = 1;
	int i = 0;

	for (; i < p; i++)
	{
		val *= v;
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

		if ((c < '0') && (c > '9'))
			return (-1);

		val += (c - '0') * _pow(10, len);
		len -= 1;
		i++;
	}

	return (val * sign);
}
