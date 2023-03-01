#include "main.h"
#include "stdio.h"
/**
 *_strlen -counts the length of the string
 *@s: used to traverse the string until the end
 *by moving from one char to the next until the end of the string is reached
 *Return: (n) the vaulve of the string
 */


int _strlen(char *s)
{
	int n;

	n = 0; /** will store the length of the string that s obtains */

	while (*s != '\0')
	{
		s = s + 1;
		n = n + 1;
	}
	return (n);
}
