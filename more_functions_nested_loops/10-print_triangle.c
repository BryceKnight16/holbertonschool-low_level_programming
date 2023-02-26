#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i = 0, j, n = size - 1;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				if (j < n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j = j + 1;
			}
			n = n - 1;
			_putchar('\n');
			i = i + 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
