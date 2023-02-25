#include "main.h"

/**
 * print_alphabet - command that prints the alphabet
 * using prevoius task code
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch = ch + 1;
	}
	_putchar('\n');
}
