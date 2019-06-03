#include "hash_tables.h"

/**
 * hash_djb2 - returns hash for given string with djb2 algorithm
 * @str: string to hash
 * Return: hash num
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int idx;

	hash = 5381;
	while ((idx = *str++))
	{
		hash = ((hash << 5) + hash) + idx;
	}
	return (hash);
}
