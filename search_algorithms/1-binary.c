#include <stdio.h>

void print_array(int *array, size_t size)
{
	size_t i = 0;
	printf("Array: ");

	while (i < size)
	{
		printf("%d ", array[i]);
		i = i + 1;
	}
	printf("\n");
}

int binary_search(int *array, size_t size, int value)
{

	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL || size == 0)
	{
	    return (-1);
	}

	while (left <= right)
	{
		size_t mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
		print_array(array, size);
	}
	return (-1);
}
