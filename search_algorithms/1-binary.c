#include <stdio.h>

/**
 * print_array - prints array.
 *
 * @array: Pointer to the integer array.
 * @size: The number of elements in the array.
 */

void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");

	while (i < size - 1)
	{
		printf("%d, ", array[i]);
		i = i + 1;
	}
	printf("%d\n", array[i]);
}
/**
 * binary_search -  on a sorted integer array to find a specified value.
 *
 * @array: Pointer to the sorted integer array.
 * @size: The number of elements in the array.
 * @value: The value to be searched in the array.
 * Return: The index of the value if found, or -1 if not found.
 */

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

		print_array(&array[left], right - left + 1);
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
	}
	return (-1);
}
