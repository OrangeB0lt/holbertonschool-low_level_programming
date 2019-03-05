#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicate string
 * @str: string to duplicate
 * Return: returns copy of a pointer or NULL
 **/

char *_strdup(char *str)
{
	char *cpy;
	unsigned int i, n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	cpy = malloc(++i * sizeof(char));
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		cpy[n] = str[n];
	}
	return (cpy);
}
