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

	for (index = 0; h != NULL; h = h->next, index++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %.*s\n", h->len, h->len, h->str);
		}
	}
	return (index);
}
