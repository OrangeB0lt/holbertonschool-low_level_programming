#include "holberton.h"

/**
 * _strcpy - copies a string to a destination
 * @dest: destination of string
 * @src: source string to copy
 * Return: points to the destination
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
