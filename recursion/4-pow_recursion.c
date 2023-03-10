#include "main.h"

/**
 *_pow_recursion - int x to the power of y
 *
 *@x: base number
 *@y: number to power
 *
 *Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)/* power to 0 = 0 so return 1*/
	{
		return (1);
	}
	if (y < 0) /* checking if nega */
	{
		return (-1);
	}
	/* if not nega, do the power of the two ints */
	return (x * _pow_recursion(x, y - 1)); /* recursion */
}
