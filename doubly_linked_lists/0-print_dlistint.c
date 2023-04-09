#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: elements of the list
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter = counter + 1;
	}
	return (counter);
}
