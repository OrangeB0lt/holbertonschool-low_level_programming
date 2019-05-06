#include "holberton.h"

/**
 * _memset - main function to print memory sets
 *
 * @s: string
 * @b: constant byte
 * @n: unsigned integer
 * Return: returns array s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
