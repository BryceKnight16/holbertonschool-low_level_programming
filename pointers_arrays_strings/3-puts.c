#include "main.h"
#include <stdio.h>
/**
 *_puts - prints the string *str
 *@str: - array of char that is a string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0') /* if it isnt the end of the string contin.*/
	{
		_putchar(*str); /*printing first char in string*/
		str = str + 1; /* moving to the next char in string*/
	}
	_putchar('\n');
}
