#include "main.h"
#include <stdio.h>

/**
 *print_rev - prints string in reverse
 *@s: the contains the string
 *
 *Return: Void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c = c + 1;
	}

	c = c - 1;

	while (c >= 0)
	{
		_putchar(s[c]);
		c = c - 1;
			}
	_putchar('\n');
}
