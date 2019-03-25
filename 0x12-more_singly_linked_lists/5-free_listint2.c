#include "lists.h"

/**
 * free_listint2 - frees listint_t struct
 * @head: pointer to head of list
 **/

void free_listint2(listint_t **head)
{
	listint_t *freeNode;
	listint_t *header;

	header = *head;
	while (header != NULL && head != NULL)
	{
		freeNode = header;
		header = header->next;
		free(freeNode);
	}
	*head = NULL;
}
