#include "main.h"

/**
 *times_table - does 9 times tables starting while 0
 */

void times_table(void)
{
	int r = 0;

	while (r <= 9)
	{
		int c = 1;

		_putchar ('0');
		_putchar(',');
		_putchar(' ');
		while (c <= 9)
		{
			int d = (r * c);

			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			c = c + 1;
		}
		_putchar('\n');
		r = r + 1;
	}
}
