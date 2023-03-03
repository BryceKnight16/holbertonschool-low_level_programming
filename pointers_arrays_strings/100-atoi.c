#include "string.h"
#include "main.h"
#include <stdio.h>

/**
 * is_digit - reads string to find numbers
 *@c: find numbers
 *Return: int where digit is first found
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/**
 * skip_it - if not a number skip it and move along the string
 *@str: string to search
 *Return: string if isnt a digit
 */

char *skip_it(char *str)
{
	while (*str != '\0')
	{
		if (is_digit(*str))
		{
			return (str);
		}
		str = str + 1;
	}
	return (str);
}

/**
 * is_neg - determines if number is a neg by counting the amount '-'
 *before the number in string too see if neg
 *@num:integer
 *Return: Positive or negative
 */

int is_neg(char *num)
{
	int num_of_neg;

	num_of_neg = 0;
	while (*num != '\0')
	{
		if (is_digit(*num) == 1)
		{
			break;
		}
		if (*num == '-')
		{
			num_of_neg = num_of_neg + 1;
		}
		num = num + 1;
	}
	return (num_of_neg % 2);
}

/**
 * num_of_digs - counts the string
 *@s: string
 *Return: length
 */

int num_of_digs(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (is_digit(s[i]) == 0)
		{
			break;
		}
		i = i + 1;
	}
	return (i);
}

/**
 *_atoi - converts string to int
 *@s: string to convert
 *Return: integer
 */

int _atoi(char *s)
{
	char *frst_dig;
	int pow_ten;
	int result;
	int cur_dig;
	int len;
	int i;

	result = 0;
	pow_ten = 1;
	frst_dig = skip_it(s);
	len = num_of_digs(frst_dig);
	i = len - 1;

	while (i >= 0)
	{
		cur_dig = frst_dig[i] - '0';
		result = result + cur_dig * pow_ten;
		i = i - 1;
		pow_ten = pow_ten * 10;
	}
	if (is_neg(s) == 1)
	{
		return (result * -1);
	}
	return (result);
}
