#include "lists.h"

/**
 * add_node_end - add a new node to the end of a list_t linked list
 *
 * @head: pointer to pointer to the head of the linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the head of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	if (str != NULL)
	{
		new_node = malloc(sizeof(*new_node));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			last_node = *head;
			while (last_node->next != NULL)
			{
				last_node = last_node->next;
			}
			last_node->next = new_node;
		}
		return (*head);

	}
	return (NULL);
}
