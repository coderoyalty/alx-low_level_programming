#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Success (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	return (0);
}
