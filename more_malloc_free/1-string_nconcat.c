#include "main.h"
#include <stdio.h>
#include <stdlib.h>

 /**
 * _strlen - Calculate the length of a string.
 * @str: The string to calculate the length of.
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
 * _strncpy - Copy a string, up to a certain number of characters.
 * @dest: The destination buffer.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy.
 *
 * Return: The destination buffer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			while (i < n)
			{
				dest[i] = '\0';
				i = i + 1;
			}
			break;
		}
		i = i + 1;
	}
	return (dest);
}

/**
 * string_nconcat - Concatenate two strings, up to a certain number of
 * characters from the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to take from @s2.
 *
 * Return: The concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	int a;
	int b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = _strlen(s1);
	b = _strlen(s2);

	if ((int)n >= b)
	{
		n = b;
	}

	nconcat = malloc(sizeof(*nconcat) * (a + n + 1));
	if (nconcat == NULL)
	{
		return (NULL);
	}
	_strncpy(nconcat, s1, a);
	_strncpy(&nconcat[a], s2, n);
	nconcat[a + n] = '\0';
	return (nconcat);
}
