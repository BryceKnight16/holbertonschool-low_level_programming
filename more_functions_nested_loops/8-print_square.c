#include "main.h"

/**
 * print_square - draws a square
 * @size: An input integer
 * Return: Always 0
 */

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		while (i < size)
		{
			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j = j + 1;
			}
			_putchar(35);
			_putchar('\n');
			i = i + 1;
		}
}
	else
	{
		_putchar('\n');
	}
}
