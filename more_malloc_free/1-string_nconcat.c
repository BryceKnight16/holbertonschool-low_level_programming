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

	if (n >= b)
	{
		n = b;
	}

	nconcat = malloc(sizeof(*nconcat) * (a + n));
	if (nconcat == NULL)
	{
		return(NULL);
	}
	_strncpy(nconcat, s1, a);
	_strncpy(&nconcat[a], s2, n);
	nconcat[a+n] = '\0';
	return(nconcat);
}
