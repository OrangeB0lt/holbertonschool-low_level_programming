#include "sort.h"

/**
 * Cswap - swaps a node with next node in list
 * @head: double pointer to start of list
 * @node: node
 */

void Cswap(listint_t **head, listint_t *node)
{
	node->next->prev = node->prev;
	if (node->prev)
		node->prev->next = node->next;
	else
	{
		*head = node->next;
	}
	node->prev = node->next;
	node->next = node->next->next;
	node->prev->next = node;
	if (node->next)
		node->next->prev = node;
}

/**
 * cocktail_sort_list - sorts a doubly linked list using cocktail sort algo
 * @list: pointer to head of dlinked list
 */

void cocktail_sort_list(listint_t **list)
{
	char replace;
	listint_t *storage;

	replace = 1;

	if (*list == NULL || list == NULL)
		return;

	storage = *list;

	while (replace != 0)
	{
		replace = 0;
		while (storage->next != NULL)
		{
			if (storage->next->n < storage->n)
			{
				Cswap(list, storage);
				replace = 1;
				print_list(*list);	
			}
			else
			{
				storage = storage->next;
			}
		}
		if (replace == 0)
			break;
		replace = 0;
		while (storage->prev != NULL)
		{
			if (storage->prev->n > storage->n)
			{
				Cswap(list, storage->prev);
				replace = 1;
				print_list(*list);
			}
			else
				storage = storage->prev;
		}
			
	}
}