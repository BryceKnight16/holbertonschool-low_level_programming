#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - executes function on each element of the array
 *@array:array that function is applied to
 *@size: size of the array
 *@action: pointer to the action function
 *Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}
