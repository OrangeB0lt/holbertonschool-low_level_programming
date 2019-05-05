#include "lists.h"

/**
 * add_dnodeint - adds a new node to the start of the double linked list
 * @head: head of linked list
 * @n: value of node
 * Return: address of added element of NULL if fails
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_Node;

	add_Node = malloc(sizeof(dlistint_t));
	if (add_Node == NULL)
	{
		return (NULL);
	}
	add_Node->n = n;
	add_Node->prev = NULL;

	if (*head == NULL)
	{
		add_Node->next = NULL;
		*head = add_Node;
	}
	else
	{
		add_Node->next = *head;
		(*head)->prev = add_Node;
		*head = add_Node;
	}
	return (add_Node);
}
