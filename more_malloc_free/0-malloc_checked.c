#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc, and exit on failure.
 * @b: the number of bytes to allocate.
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
