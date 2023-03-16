#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - returns a pointer to malloc
 * which contains a copy of the string
 * @str: string to duplicate
 * Return: duplicated string with malloc
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
		i = i + 1;
	dup_str = (char *)malloc(i + 1);

	if (dup_str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (len < i)
	{
		dup_str[len] = str[len];
		len = len + 1;
	}
	return (dup_str);
}
