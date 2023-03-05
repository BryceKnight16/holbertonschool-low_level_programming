#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int i = 0, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (*(n + i) != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (*(n + i) == *(s1 + j))
			{
				*(n + i) = *(s2 + j);
				break;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (n);
}
