#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: head pf the linked list
 * Return: the number of nodes
 **/

size_t print_list(const list_t *h)
{
	size_t index;

	if (h->str == NULL)
		return ("[0] (nil)");
	for (index = 0; h != NULL; index++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (index);
}