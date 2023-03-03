#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int o;

	i = 0;
	o = 0;

	while (dest[i] != '\0')
		i = i + 1;

	while (src[o] != '\0')
	{
		dest[i] = src[o];
		i = i + 1;
		o = o + 1;
	}
	dest[i] = '\0';

	return (dest);
}
