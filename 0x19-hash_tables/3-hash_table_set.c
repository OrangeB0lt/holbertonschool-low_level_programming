#include "hash_tables.h"

/**
 * hash_table_set - adds new element to hash table
 * @ht: ptr to hash table
 * @key: key add
 * @value: value add
 * Return: 1 if success, 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newN;
	unsigned long int index, size;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	newN = malloc(sizeof(hash_node_t));
	if (newN == NULL)
	{
		return (0);
	}
	newN->key = strdup(key);
	newN->value = strdup(value);
	newN->next = ht->array[index];
	ht->array[index] = newN;
	return (1);
}