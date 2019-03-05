#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size
 * @c: character c
 * Return: returns c in array
 **/

char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int i;

	if (size != 0)
	{
		r = malloc(size * sizeof(c));
	}
	else
	{
		return ('\0');
	}
	if (r == 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		r[i] = c;
	}
	return (r);
}
