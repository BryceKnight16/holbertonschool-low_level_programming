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
		s = s + 1;
	}

	return (len);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = (len / 2);

	while (i < len)
	{
		_putchar(*(str + i));
		i = i + 1;
	}
	_putchar('\n');
}
