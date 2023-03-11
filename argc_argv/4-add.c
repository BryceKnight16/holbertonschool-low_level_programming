#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*check_digit - checks string is dig
*@s: pointer to string
*Return: 1 if digit, 0 if not
*/
int check_digit(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')/* checking if dig */
		{
			return (0);
		}
		s = s + 1;
	}
	return (1);
}

/**
 * main - adds all argvs that are digits
 * @argc: arguments give to func
 * @argv: array of pointers to argu strings
  * Return: 0 if success, 1 if argv is not a digit
 */
int main(int argc, char **argv)
{
	int i;
	int sum;

	i = 1;
	sum = 0;

	while (i < argc)
	{
		if (!check_digit(argv[i]))/*checking if argv is digit*/
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]); /*changing argv into a int*/
		i = i + 1;
	}
	printf("%d\n", sum);
	return (0);
}
