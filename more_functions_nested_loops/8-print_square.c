#include "main.h"

/**
 * print_square - draws a square
 * @size: An input integer
 * Return: Always 0
 */

void print_square(int size)
{
	int row = 1, column;

	if (size > 0)
	{
		while (row <= size)
		{
			column = 1;

			while (column <= size)
			{
				_putchar('#');
				column = column + 1;
			}
			_putchar('\n');
			row = row + 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
