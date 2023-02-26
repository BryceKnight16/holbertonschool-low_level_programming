#include "main.h"

/**
 * print_most_numbers - print 0 to 9, skip 2 and 4
 */

void print_most_numbers(void)
{
	char c;

	c = 0;

	while (c <= 9)
	{
		if (c != '2' && c != '4')
			_putchar(c + '0');
		c = c + 1;
	}
	_putchar('\n');
}
