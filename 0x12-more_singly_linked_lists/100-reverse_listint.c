#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: head of list
 * Return: the list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *storage;
	listint_t *reverse;

	storage = *head;
	if (storage == NULL)
		return (NULL);
	while (storage->next != NULL)
	{
		reverse = storage->next;
		storage->next = reverse->next;
		reverse->next = *head;
		*head = reverse;
	}
	return (*head);
}
