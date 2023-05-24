#include "search_algos.h"

/**
 * linear_search - short description
 * @array: a int *data type variable
 * @size: a size_t data type variable
 * @value: a int data type variable
 *
 * Return: type is int
 */

int linear_search(int *array, size_t size, int value)
{
	size_t dex;

	if (array == NULL)
	{
		return (-1);
	}
	dex = 0;
	while (dex < size)
	{
		printf("Value checked array[%ld] = [%d]\n", dex, array[dex]);
		if (array[dex] == value)
		{
			return (dex);
		}
		dex = dex + 1;
	}
	return (-1);
}
