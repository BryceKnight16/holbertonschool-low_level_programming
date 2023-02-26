#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int times = n;

	while (times > 0)
	{
	_putchar('_');
	times = times - 1;
	}
	_putchar('\n');
}
