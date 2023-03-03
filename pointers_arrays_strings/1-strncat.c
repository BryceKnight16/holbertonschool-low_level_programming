#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: number of characters to concatenate from src
 *
 * Return: Pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*p != '\0')
	{
		p = p + 1;
	}

	while (i < n && src[i] != '\0')
	{
		*p = src[i];
		p = p + 1;
		i = i + 1;
	}

	*p = '\0';

	return (dest);
}
