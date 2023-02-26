#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: An input integer
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j = j + 1;
			}
			_putchar('\\');
			_putchar('\n');
			i = i + 1;
		}
}
	else
	{
		_putchar('\n');
	}
}
