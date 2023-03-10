#include <stdio.h>
#include "main.h"
/**
 * main - print name of program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
