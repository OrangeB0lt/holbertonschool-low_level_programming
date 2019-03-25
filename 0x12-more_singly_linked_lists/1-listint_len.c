#include "lists.h"

/**
 * listint_len - function returns number of elements in a linked-list
 * @h: beginning of list
 * Return: returns the # of elements in list
 **/

size_t listint_len(const listint_t *h)
{
	size_t index;

	for (index = 0; h != NULL; index++)
	{
		h = h->next;
	}
	return (index);
}
