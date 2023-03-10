#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments
 * @argc: argument counter
 * @argv:pointer to array of arguments
 * Return: arguments on a new line
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;

	while (argc > i)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
