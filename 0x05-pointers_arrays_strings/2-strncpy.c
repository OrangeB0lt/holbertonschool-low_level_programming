#include "holberton.h"

/**
 * _strncpy -  copies a string from the source to the destination string
 * @n: number of chars
 * @dest: destination string
 * @src: source string
 *
 * Return: returns destination
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i != n)
			{
				dest[i++] = '\0';
			}
			break;
		}
		i++;
	}
	return (dest);
}
