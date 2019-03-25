#include "lists.h"

/**
 * pop_listint - function deletes head node of linked list
 * @head: head of linked list
 * Return: returns the head node's data
 **/

int pop_listint(listint_t **head)
{
	listint_t *deleteNode;
	int nodeData;

	if (*head == NULL)
		return (0);
	deleteNode = *head;
	*head = (*head)->next;
	nodeData = deleteNode->n;
	free(deleteNode);
	return (nodeData);
}
