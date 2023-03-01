#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s += 1;
	}

	return (len);
}

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}

	if (i % 2 != 0)
	{
		i -= 1;
		_putchar(str[i]);
	}

	_putchar('\n');
}
