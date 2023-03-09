#include "main.h"

/**
 * find_sqrt - helper function that recursively gets
 * the natural square root of a number
 *
 * @n: input number
 * @root: number to find the natural square root
 *
 * Return: natural square root of n, or -1 if n not a natural square root
 */
int find_sqrt(int n, int root)
{
	/* Check the root is equal to n */
	if (root * root == n)
		return (root);
	/* Check the root is greater than n*/
	if (root * root > n)
		return (-1);
	/* Recursion*/
	return (find_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - if the natural square root of a number
 *
 * @n: input number
 *
 * Return: natural square root of n, or -1
 * if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	/* Check whether the n is nega */
	if (n < 0)
		return (-1);
	/* find_sqrt  with an initial candidate of 1*/
	return (find_sqrt(n, 1));
}
