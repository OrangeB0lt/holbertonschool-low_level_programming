#include "lists.h"

/**
 * dlistint_len - returns the num of elements in a doubly list
 * @h: head
 * Return: num of elements
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t index;

	for (index = 0; h != NULL; index++)
	{
		h = h->next;
	}
	return (index);
}
