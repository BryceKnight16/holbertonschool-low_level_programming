#include "lists.h"

/**
 * add_dnodeint_end - new node to end of list_t
 *
 * @head: pointer to pointer to head of the linked list
 * @n: number to add to node
 * Return: pointer to linked list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = new_node;
		new_node->prev = ptr;
	}
	return (*head);
}
