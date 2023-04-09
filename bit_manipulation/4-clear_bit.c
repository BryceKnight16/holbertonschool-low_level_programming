#include "main.h"

/**
 * clear_bit - switches bit off at given index number
 *
 * @n: number to modify
 * @index: index of bit to turn off
 * Return: success 1, fail -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if ((sizeof(n) * 8) < index)
	{
		return (-1);
	}
	i = 1;
	i = i << index;
	*n = *n | i;
	*n = *n ^ i;
	return (1);
}
