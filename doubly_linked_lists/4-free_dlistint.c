#include "lists.h"

/**
 * free_dlistint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
