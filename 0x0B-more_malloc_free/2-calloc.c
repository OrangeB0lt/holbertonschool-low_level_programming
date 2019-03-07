#include <stdlib.h>
#include <stdio.h>

/**
 * _mem - sets the first n bytes of the mem
 * @string: array to set
 * @num: number to set
 * @n: first n of bytes
 * Return: returns string
 **/

char _mem(char *string, char num, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		string[i] = num;
	return (string);
}

/**
 * _calloc - uses malloc to assign memory, then sets it to zero
 * @nmemb: memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or returns NULL on fail
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmem == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	_mem(pointer, 0, (nmemb * size));
	return (pointer);
}
