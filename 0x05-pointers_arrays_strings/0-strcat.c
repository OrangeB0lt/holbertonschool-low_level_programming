#include "holberton.h"

/**
 * _strcat - links the two strings together
 * @dest: destination string
 * @src: source string
 * Return: returns finished destination string
 **/

char *_strcat(char *dest, char *src)
{
	int i, x;

	x = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (src[x] != '\0'; x++)
	{
		dest[i++] = src[x++];
	}
	dest[i] = '\0';
	return (dest);
}
