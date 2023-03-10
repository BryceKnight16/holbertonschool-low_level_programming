#include "main.h"

/**
 * factorial - times all of the numbers count from 1 to what ever n is and
 * given outcome
 *@n: pointer to int to become a factorial
 *Return: the factorial of n, or -1 if n is negative
 */



int factorial(int n)
{
	if (n < 0)/* checking if n is nega and returning -1 if true */
	{
		return (-1);
	}
	if (n == 0) /* checking if n is postive and returning its value */
	{
		return (1);
	}
	return (n * factorial(n - 1)); /*recursion */
}
