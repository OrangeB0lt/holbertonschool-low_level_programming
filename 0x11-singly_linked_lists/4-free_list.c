#include "lists.h"

/**
 * free_list - frees a list_t linked list
 * @head: head of linked list
 **/
void free_list(list_t *head)
{
	list_t *temporary;

	temporary = head;
	while (head != NULL)
	{
		temporary = head;
		head = head->next;
		free(temporary->str);
		free(temporary);
	}
	free(head);
}
