#include "sort.h"
/**
 * insertion_sort_list - sorts list insertion sort
 * @list: point to head of list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *here, *store_node;

	if (*list == NULL || list == NULL)
		return;

	here = (*list)->next;
	while (here != NULL)
	{
		if (here->prev->n > here->n)
		{
			store_node = here->next;
			while (here->prev != NULL)
			{
				if (here->n < here->prev->n)
				{
					prevSwap(here);
					while ((*list)->prev != NULL)
						(*list) = (*list)->prev;
					print_list(*list);
				}
				else
					break;
			}
			here = store_node;
		}
		else
				here = here->next;
	}
}
/**
 * prevSwap - swaps nodes to prev node
 * @no: node being swapped
 */
void prevSwap(listint_t *no)
{
	listint_t *first, *second, *nt;

	if (no->prev == NULL)
		return;

	second = no->prev;
	first = second->prev;
	nt = no->next;
	if (first != NULL)
		first->next = no;
	no->prev = first;
	no->next = second;
	second->prev = no;
	second->next = nt;
	if (nt != NULL)
		nt->prev = second;
}
