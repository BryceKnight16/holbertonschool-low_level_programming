#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * displaying the alphabet without q and e
 * the while command
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bet = 'a';

		while (bet <= 'z')
		{
			if (bet == 'q' || bet == 'e')
			{
				bet = bet + 1;
			}
			else
			{
				putchar(bet);
			bet = bet + 1;
		}
		}
	putchar('\n');

	return (0);
		}
