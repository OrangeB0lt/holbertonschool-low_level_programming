#include "lists.h"

/**
 * free_listint - frees up a linked list
 * @head: head
 * Return: returns none
 **/

void free_listint(listint_t *head)
{
	listint_t *fre3;

	while (head != NULL)
	{
		fre3 - head;
		head = head->next;
		free(fre3);
	}
}
