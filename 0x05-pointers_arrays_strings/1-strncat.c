#include "holberton.h"

/**
 * _strncat - concatenates strings, with given values of characters
 *
 * @n: num of chars to conatenate
 * @dest: destination string
 * @src: source string
 * Return: returns destination string
 *
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	x = 0;
	while (src[x] != '\0' && x != n)
	{
		dest[i++] = src[x++];
	}
	dest[i] = '\0';
	return (dest);
}
