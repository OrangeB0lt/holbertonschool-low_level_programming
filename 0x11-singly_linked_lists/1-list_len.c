#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of elements in a list
 * @h: beginning of const list being counted
 * Return: returns num of elements in a list
 **/

size_t list_len(const list_t *h)
{
	int index;
	const list_t *pointer;

	for (index = 0, pointer = h; pointer != NULL; index++)
		pointer = pointer->next;
	return (index);
}
