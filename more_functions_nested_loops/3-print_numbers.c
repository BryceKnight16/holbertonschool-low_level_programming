#include "main.h"

/**
 *print_numbers -prints num 0-9
 */

void print_numbers(void)
{
	char c;

	c = 0;
	while (ch <= 9)
	{
		_putchar(c + '0');
		c = c + 1;
	}
	_putchar('\n');
}
