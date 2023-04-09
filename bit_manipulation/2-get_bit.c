#include "main.h"

/**
 * get_bit - returns value of given bit number
 * @n: number to retrieve bit from
 * @index: the number of the bit
 *
 * Return: value of the bit at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(n) * 8) < index)
	{
		return (-1);
	}
	n = n >> index;
	return (n & 1);
}
