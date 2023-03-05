#include <stdio.h>
/**
 * _memset - Fill n bytes of memory area pointed to with constant byte
 * @s: pointer
 * @b: byte to fill
 * @n: Amount of byte to add
 *
 * Return: Pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
