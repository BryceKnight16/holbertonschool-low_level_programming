#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates mem for an array using malloc
 * @nmemb: Number of elements to allocate mem for
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}
