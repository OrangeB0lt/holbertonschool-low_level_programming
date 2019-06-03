#include "hash_tables.h"

/**
 * hash_table_get - gets value from connected key
 * @ht: table to get values
 * @key: key for value
 * Return: returns value of key or NULL if can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *storage;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL ||
		 ht->size == 0 || strlen(key) == 0 || key == NULL)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	storage = ht->array[idx];
	while (storage != NULL)
	{
		if (strcmp(storage->key, key) == 0)
		{
			return (storage->value);
		}
		storage = storage->next;
	}
	return (NULL);
}