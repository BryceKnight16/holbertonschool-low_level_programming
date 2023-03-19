#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints from min to max
 * @min: min value of array
 * @max: max value of array
 *
 * Return: pointer to the newly created array, NULL on failure or if min > max
 */
int *array_range(int min, int max)
{
        int i;
	int size;
        int *arr;

        if (min > max)
	{
                return (NULL);
	}

	size = max - min + 1;

        arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
                return (NULL);
	}

        i = 0;
        while (i < size)
        {
                arr[i] = min;
                min = min + 1;
                i = i + 1;
        }

        return (arr);
}
