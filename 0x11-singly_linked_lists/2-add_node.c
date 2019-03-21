#include "lists.h"
#include <stdio.h>
/**
 * _strlen - returns the length of the given string
 * @s: string to check of length
 * Return: returns the length of string
 */

int _strlen(const char *s)
{
	int index;

	i = 0;
	for (index = 0; s[index] != NULL; index++)
		;
	return (index);
}

/**
 * add_node - addsmamnode to the start of a list_t list
 * @head: pointer to head of list
 * @str: string add to node
 * Return: address of next element in list, or NULL if it fails
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *nextnode;

	nextnode = malloc(sizeof(list_t));
	if (nextnode == NULL)
		return (NULL);
	nextnode->str = strdup(str);
	nextnode->len = _strlen(str);
	nextnode->next = *head;
	*head = nextnode;

	return (nextnode);
}
