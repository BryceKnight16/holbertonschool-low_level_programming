#include <stdio.h>
#include "main.h"
/**
* main - counts number of arguments
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: the total number of argc
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
