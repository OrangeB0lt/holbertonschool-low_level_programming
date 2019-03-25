#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of the list
 * @head: pointer to head of list
 * @n: a const number
 * Return: returns the address of new element
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
