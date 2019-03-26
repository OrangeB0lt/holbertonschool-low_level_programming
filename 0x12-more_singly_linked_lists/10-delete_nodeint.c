#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node where specified
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 if succeeded, -1 if failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *storage;
	listint_t *deleteNode;
	unsigned int count;

	storage = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(storage);
	}
	else
	{
		for (count = 0; count < index - 1; count++)
		{
			storage = storage->next;
			if (storage == NULL)
				return (-1);
		}
		deleteNode = storage;
		deleteNode = deleteNode->next;
		storage->next = deleteNode->next;
		free(deleteNode);
	}
	return (1);
}
