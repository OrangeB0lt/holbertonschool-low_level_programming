#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 * @size: size array in each node
 * Return: returns pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int idx;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
	{
		return (NULL);
	}

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
	{
		hash->array[idx] = NULL;
	}
	hash->size = size;
	return (hash);
}
