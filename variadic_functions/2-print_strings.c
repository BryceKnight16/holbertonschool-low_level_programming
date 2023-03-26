#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(ap, n);

       	i = 0;

	while (i < n)
	{
		str = va_arg(ap, char *);

		if (i != 0)
		{
			printf("%s", separator);
		}

		if (str == NULL)
		{
			str = "(nil)";
		}

		printf("%s", str);

		i = i + 1;
	}

	printf("\n");
	va_end(ap);
}
