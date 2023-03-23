#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - adds two ints
 *@a: int
 *@b: int
 *Return: answer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtract b from a
 *@a: int
 *@b: int
 *Return: answer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies a and b
 *@a: int
 *@b: int
 *Return: answer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides a by b
 *@a: int
 *@b: int
 *Return: answer or Error if b == 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 *op_mod - modulo of int a divided by int b
 *@a: int
 *@b: int
 *Return: answer or Error if b == 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
