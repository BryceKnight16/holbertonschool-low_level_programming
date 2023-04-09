#include "lists.h"

/**
 * sum_dlistint - adds all the elements of a dlistint_t list
 *
 * @head: elements of the list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
