#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of double linked list
 * @head: head of linked list
 * @index: index of node to get
 * Return: returns node or null
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *storage;
	unsigned int count;

	storage = head;

	for (count = 0; storage != NULL && count <= index)
	{
		if (index == count)
		{
			return (storage);
		}
		storage = storage->next;
	}
	return (NULL);
}
