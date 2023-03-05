#include "main.h"
/**
 * _strchr - Find given char in a string
 * @s: string to search
 * @c: char to search for
 *
 * Return: Pointer to first c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s= s + 1;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
