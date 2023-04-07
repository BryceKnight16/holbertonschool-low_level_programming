#include "lists.h"

/**
 * add_node - new node to begining of list_t
 *
 * @head: pointer to pointer to head of the linked list
 * @str: string to add to node
 * Return: pointer to linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL && str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
