#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node in given position
 * @head: head of node
 * @idx: spot to place node
 * @n: data to place in new node
 * Return: the address of the new node
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *storage;
	unsigned int count;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	storage = *head;
	count = 0;
	if (*head == NULL && idx > 0)
	{
		free(newNode);
		return (NULL);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (; count < idx - 1; count++)
	{
		storage = storage->next;
		if (storage == NULL && idx - count > 0)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = storage->next;
	storage->next = newNode;
	return (newNode);
}
