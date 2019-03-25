#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of list
 * @head: head of new node
 * @n: number
 * Return: returns the address of new element
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *nextNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		nextNode = *head;
		if (nextNode->next != NULL)
			nextNode = nextNode->next;
		nextNode->next = newNode;
	}
	return (newNode);
}
