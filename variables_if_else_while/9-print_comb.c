#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * using ascii to print a comma and a space after a number
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	num = 48; /*demical for 0 */
	while (num <= 57)/* demical for 9 */
	{
		putchar(num);
		if (num != 57)
		{
			putchar (44); /*deicmal for the comma*/
			putchar (32);/* decimal for space */

		}
		num = num + 1;
	}
	putchar(10);
	return (0);
}
