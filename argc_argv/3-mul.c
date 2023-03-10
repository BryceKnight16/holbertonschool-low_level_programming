#include <stdio.h>
#include <stdlib.h>/* lib where atoi is */
#include "main.h"
/**
*main - prints all arguments
*@argc: argument counter
*@argv: number to multi
*Return: Error if 3 argc's, return multi of argv's if only 2
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
