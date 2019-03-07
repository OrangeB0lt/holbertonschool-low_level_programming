#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - uses malloc to assign memory, then sets it to zero
 * @nmemb; memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or returns NULL on fail
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *allocate;

	if (nmem == 0 || size == 0)
	{
		return (NULL);
	}
	allocate = malloc(nmemb * size);
	if (allocate == NULL)
	{
		return (NULL);
	}
	for (i=0; i != size; i++)
	{
		*(allocate + (size * i)) = 0;
	}
	return (allocate);
}
