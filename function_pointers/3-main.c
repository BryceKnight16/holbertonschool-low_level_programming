#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 *
 *int main - a function that makes a calculator with user input
 *@num1: first input for calc
 *@num2: second input for calc
 *@result: the resukt of the calc
 *Return: result
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
