#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of a variable number of integers
 * @n: the number of integers to sum
 *
 * Return: answer or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	i = 0;
	sum = 0;

	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i = i + 1;
	}

	va_end(ap);
	return (sum);
}
