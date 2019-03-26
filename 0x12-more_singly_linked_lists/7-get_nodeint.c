#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: head of linked list
 * @index: index to get
 * Return: returns the indexed node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *storage;
	unsigned int count;

	for (count = 0, storage = head; count < index && storage != NULL;
	     count++)
		storage = storage->next;
	if (count != index)
		return (NULL);
	return (storage);
}
