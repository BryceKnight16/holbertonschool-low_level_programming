#include "main.h"
/**
 * _strspn - Find length of string that consists only of chosen bytes
 * @s: String to search
 * @accept: acceptable bytes in the string
 *
 * Return: Length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, l, j, a;

	i = l = 0;
	while (s[i] != 0)
	{
		j = 0;
		a = 0;
		while (accept[j] != 0)
		{
			if (s[i] != accept[j])
			{
				j = j + 1;
			}
			else if (s[i] == accept[j])
			{
				a = a + 1;
				l = l + 1;
				j = j + 1;
			}
		}
		if (a == 0)
			return (l);
		i = i + 1;
	}
	return (l);
}
