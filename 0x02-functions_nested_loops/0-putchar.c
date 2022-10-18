#include "main.h"

/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	const char *text = "_putchar\n\0";
	int counter = 0;

	while (text[counter] != '\0')
	{
		_putchar(text[counter]);
		counter++;
	}
	return (0);
}
