#include "lists.h"

/**
 * _strlen - returns the length of the given string
 * @s: string to check of length
 * Return: returns the length of string
 */

int _strlen(const char *s)
{
	int index;

	index = 0;
	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}

/**
 * add_node_end -adds a node at the end of list_t list
 * @head: beginning of linked list
 * @str: string of name
 * Return: the address of new element or NULL if it fails
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pointer;
	list_t *temporary;

	pointer = malloc(sizeof(list_t));
	if (pointer == NULL)
		return (NULL);
	pointer->str = strdup(str);
	pointer->len = _strlen(str);
	pointer->next = NULL;
	if (*head == NULL)
		*head = pointer;
	else
	{
		temporary = *head;
		while (temporary->next != NULL)
			temporary = temporary->next;
		temporary->next = pointer;
	}
return (pointer);
}
