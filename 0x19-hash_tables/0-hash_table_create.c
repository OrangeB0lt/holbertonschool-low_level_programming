#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 * @size: size array in each node
 * Return: returns pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t:
	unsigned long int idx;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
	{
		return (NULL);
	}

	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	{
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
	{
		hash_t->array[idx] = NULL;
	}
	hash_t->size = size;
	return (hash_t);
}
