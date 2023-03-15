#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - main entry
 * @size: size input
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;
	array = malloc(sizeof(char) * size); /*mal*/

	if
		(size == 0 || array == NULL) /* checking if mal successful */
		return (NULL);

	while (i < size)
	{
		array[i] = c; /* initialise array to char c*/
		i = i + 1;
	}

	return (array);
}
