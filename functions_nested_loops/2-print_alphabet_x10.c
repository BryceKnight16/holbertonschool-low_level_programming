#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet ten times
 *
 *Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;
	while (i <= 9)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch = ch + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
