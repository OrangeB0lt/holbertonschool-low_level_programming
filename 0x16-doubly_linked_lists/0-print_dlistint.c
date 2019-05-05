#include "lists.h"

/**
 * print_dlistint - prints out double linked list
 * @h: head of linked list
 * Return: the num of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t index;

	for (index = 0; h != NULL; index++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (index);
}
