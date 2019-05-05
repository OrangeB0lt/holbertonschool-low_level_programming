#include "lists.h"

/**
 * print_distint - prints out double linked list
 * @h: head of linked list
 * Return: the num of nodes
 **/

size_t print_distint(const distint_t *h)
{
	size_t index;

	for (index = 0; h != '\0'; index++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (index);
}
