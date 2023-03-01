#include <stdio.h>
#include "main.h"

/**
 *rev_string - sets two points at the start and end of the string
 *@s:string reversed
 *Return: (s) the reversed string
 */

void rev_string(char *s)
{
	char ch, *p, *q;
/*
 *Point q at the last character in s[],
*/

	q = s;
	while (*q != '\0')
		q = q + 1;

	if (q > s)
	{
		q = q - 1;
	}

 /*
  *Simultaneously sweep p from front to back and q from back to front,
  *swapping characters at p and q, until the pointers meet.
 */

	p = s;
	while (p < q)
	{
		ch = *p;
		*p = *q;
		*q = ch;
		p = p + 1;
		q = q - 1;
	}
}
