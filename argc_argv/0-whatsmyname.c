#include <stdio.h>

/**
 * main - print name of program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;

	while (i <= argc)
	{
		printf("%s\n", (argv[i]));
		break;
	}
	return (0);
}
