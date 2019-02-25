#include "holberton.h"

/**
 * _memcpy - copys bit of memory
 * @dest: destination array
 * @src: source array
 * @n: oh many bytes to copy
 * Return: returns destination string
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
