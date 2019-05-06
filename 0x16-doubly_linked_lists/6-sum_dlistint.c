#include "lists.h"

/**
 * sum_dlistint - returns the sum of data in the entire linked list
 * @head:  head of list
 * Return: returns the sum, or 0 if fails
 *
 **/

int sum_dlistint(dlistint_t *head)
{
	int equals;
	dlistint_t *storage;

	storage = head;
	equals = 0;
	while (storage != NULL)
	{
		equals += storage->n;
		storage = storage->next;
	}
	return (equals);
}
