#include "lists.h"

/**
 * print_listint - prints all elements in a list
 * @h: beginning of list
 * Return: returns the # of nodes
 **/

size_t print_listint(const listint_t *h)
{
	size_t index;

	for (index = 0; h != NULL; index++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (index);
}
