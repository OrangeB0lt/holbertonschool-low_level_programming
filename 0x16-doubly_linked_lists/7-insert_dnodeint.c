#include "lists.h"

/**
 *
 *
 *
 *
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *add, *nxt, *pointer;

	if (h == NULL)
	{
		return (NULL);
	}
	else if (idx != 0)
	{
		pointer = *h;
		count = 0;
		while (count < idx -1 && pointer != NULL)
		{
			pointer = pointer->next;
			count++;
		}
		if (pointer == NULL)
		{
			return (NULL);
		}
	}
	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->n = n;
	if (idx == 0)
	{
		 nxt = *h;
		 *h = add;
		 add->prev = NULL;
	}
	else
	{
		add->prev = pointer;
		nxt = pointer->next;
		pointer->next = add;
	}
	add->next = nxt;
	if (add->next != NULL)
		add->next->prev = add;
	return (add);
}
