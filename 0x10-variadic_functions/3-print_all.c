#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: type to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	char *str;
	int i = 0;
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}

			separator = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
