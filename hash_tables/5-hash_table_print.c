#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	int check;

	if (ht == NULL)
	{
		return;
	}
	i = 0;
	check = 1;
	printf("{");
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			if (check != 1)
			{
				printf(", ");
			}
			check = 0;
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
