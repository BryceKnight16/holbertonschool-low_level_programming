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
	if (y < 0) /* checking if nega */
	{
		return (-1);
	}
	else if (y != 0) /* if not nega, do the power of the two ints */
	{
		return (x * _pow_recursion(x, y - 1)); /* recursion */
	}
	else
	{
		return (1);
	}
}
