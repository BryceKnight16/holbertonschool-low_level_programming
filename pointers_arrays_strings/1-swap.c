#include "main.h"
#include <stdio.h>

/**
 * swap_int -swaps the value of a and b
 *@a: points int a
 *@b: pints int b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
