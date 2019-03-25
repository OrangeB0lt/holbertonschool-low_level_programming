#include "lists.h"

/**
 * sum_listint - adds all the data in a linked list
 * @head: head of linked list
 * Return: the sum of all data in linked list
 **/

int sum_listint(listint_t *head)
{
	listint_t *storage;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	storage = head;
	while (storage != NULL)
	{
		sum = sum + storage->n;
		storage = storage->next;
	}
	return (sum);
}
