#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for a int in a array
 * @size: is the number of elements in the array
 * @array: is a pointer to the array
 * @cmp: is a pointer to the function that compares
 * Return: an int or -1 if edge condtions are met
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
