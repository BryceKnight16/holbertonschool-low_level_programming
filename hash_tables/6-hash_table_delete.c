#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hast table struct
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *current;

	if (ht == NULL)
	{
		exit(-1);
	}
	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
