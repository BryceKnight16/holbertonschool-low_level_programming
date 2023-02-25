#include "main.h"

/**
 *_islower -checks for lowercase chara
 *@c: checked for lowercase
 *Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
