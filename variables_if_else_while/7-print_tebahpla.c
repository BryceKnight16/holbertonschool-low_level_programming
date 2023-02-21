#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch = ch - 1;
	}
	putchar('\n');
	return (0);
}
