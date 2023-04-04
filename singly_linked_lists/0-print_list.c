#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints everything in linked list
 *@h: pointer to the data type list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] == NULL\n");
		}
		else
		{
			printf("[%i] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
		size = size + 1;
	}
	return (size);
}
