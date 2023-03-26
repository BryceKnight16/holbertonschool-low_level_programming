#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 *print_char - prints a char
 *@ap: va_list type
 *Return: void
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 *print_int - prints an int
 *@ap: va_list type
 *Return: void
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 *print_float - prints a float
 *@ap: va_list type
 *Return: void
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 *print_str - prints a string
 *@ap: va_list type
 *Return: void
 */

void print_str(va_list ap)
{
	char *str = va_arg(ap, char *);

	str == NULL ? printf("(nil)") : printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	int a;

	print_all_t check[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(ap, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		a = 0;

		while (check[a].op != NULL)
		{
			if (*(check[a].op) == format[i])
			{
				check[a].f(ap);

				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			a = a + 1;
		}
		i = i + 1;
	}
	va_end(ap);
	printf("\n");
}
