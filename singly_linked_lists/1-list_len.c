#include "lists.h"

/**
 *list_len - counts the elements in list_t
 *@h: pointer to list_t data type
 *
 *Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size = size + 1;
	}
	return (size);
}
