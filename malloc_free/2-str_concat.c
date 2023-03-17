#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Calculate the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (*str != '\0')
	{
		len = len + 1;
		str = str + 1;
	}
	return (len);
}

/**
 * _strcpy - Copy a string from source to destination.
 * @dest: The destination to copy to.
 * @src: The source to copy from.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * str_concat - Concatenate two strings into a newly allocated string.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the new string containing
 * s1 and s2, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	new = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (new == NULL)
	{
		return (NULL);
	}

	_strcpy(new, s1);
	_strcpy(new + len_s1, s2);

	return(new);
}
