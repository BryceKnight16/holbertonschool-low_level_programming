#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 *main - a function that makes a calculator with user input
 *@argc: number of arguments on command line
 *@argv: array of char * containing arguments on com line
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
