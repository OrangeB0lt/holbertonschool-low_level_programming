#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: header to linked list
 * @index: index to delete node at
 * Return: return 1 on success, -1 on fail
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pointer;
	unsigned int counter;

	if (head == NULL)
		return (-1);
	else if (*head == NULL)
		return (-1);
	pointer = *head;
	if (index == 0)
	{
		*head = pointer->next;
		if (pointer->next != NULL)
			pointer->next->prev = NULL;
		free(pointer);
		return (1);
	}
	counter = 0;
	while (counter < index)
	{
		if (pointer->next == NULL)
			return (-1);
		pointer = pointer->next;
		counter++;
	}
	pointer->prev->next = pointer->next;
	if (pointer->next != NULL)
		pointer->next->prev = pointer->prev;
	free(pointer);
	return (1);
}
