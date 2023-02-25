#include "main.h"

/**
 * _isalpha -checks for alpha character
 *@c: the character to be checked
 *Return: 1 if letter, 0 if not a letter
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
