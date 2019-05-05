#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to end of a double linked list
 * @head: head of list
 * @n: value for node
 * Return: the address of the element or NULL if fails
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *storage, *add_Node;

	add_Node = malloc(sizeof(dlistint_t));
	if (add_Node == NULL)
	{
		return (NULL);
	}
	add_Node->n = n;
	add_Node->next = NULL;
	if (*head == NULL)
	{
		add_Node->prev = NULL;
		*head = add_Node;
	}
	else
	{
		storage = *head;
		while (storage->next != NULL)
		{
			storage = storage->next;
		}
		storage->next = add_Node;
		add_Node->prev = storage;
	}
	return (add_Node);
}
