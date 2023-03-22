#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return(a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return(a % b);
}
int op_pow(int num, int exp)
{
	if (exp == 0)
	{
		return(1);
	}
	return(num * op_pow (num, exp -1)); 
}
