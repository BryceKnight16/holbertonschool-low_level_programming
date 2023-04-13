#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in a hash table.
 * @key: The key to calculate the index for.
 * @size: The size of the hash table.
 *
 * Return: The calculated index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;
	unsigned long int index;

	if (key == NULL || size == 0)
	{
		return (0);
	}

	hash_val = hash_djb2(key);
	index = hash_val % size;
	return (index);
}
