#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_int_array - creates an array of ints
  *@number_of_elements: height of array
 *Return: ptr
 */

int *create_int_array(int number_of_elements)
{
	int *ptr;

	if (number_of_elements <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * number_of_elements);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

/**
 *fill_int_array - fills an array with desire int
 *@array: array to be filled
 *@value: int value to be filled
 *@size: width of array
 *Return: void
 */

void fill_int_array(int *array, int value, int size)
{
	int counter;

	if (array == NULL || size <= 0)
	{
		return;
	}

	counter = 0;
	while (counter < size)
	{
		array[counter] = value;
		counter = counter + 1;
	}
}

/**
 *free_int_arrays - works back to sequntially free malloc
 *@mem: allocated memory in arrays
 *@number_of_arrays: number of arrays to be free'd
 *Return: void
 */
void free_int_arrays(int **mem, int number_of_arrays)
{
	int i;

	if (mem == NULL)
	{
		return;
	}

	i = 0;
	while (i <= number_of_arrays)
	{
		free(mem[i]);
		i = i + 1;
	}
}

/**
 *alloc_grid - returns a pointer to a 2d array of integers
 *@width: height of array
 *@height: width of array
 *Return: NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **mem;
	int h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mem = malloc(sizeof(*mem) * height);
	if (mem == NULL)
	{
		return (NULL);
	}

	h = 0;
	while (h < height)
	{
		mem[h] = create_int_array(width);
		if (mem[h] == NULL)
		{
			free_int_arrays(mem, h - 1);
			free(mem);
			return (NULL);
		}
		fill_int_array(mem[h], 0, width);
		h = h + 1;
	}
	return (mem);
}
