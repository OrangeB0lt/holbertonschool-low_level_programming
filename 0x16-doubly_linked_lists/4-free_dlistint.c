#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: start of list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *storage;

	while (head != NULL)
	{
		storage = head;
		head = head->next;
		free(storage);
	}
}
