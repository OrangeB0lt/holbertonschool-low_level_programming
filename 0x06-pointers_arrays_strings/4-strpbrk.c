#include "holberton.h"

/**
 * _strpbrk - searches string for any sets of bytes
 * @s: string
 * @accept: string compared to string
 * Return: returns null if not matching
 **/

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return(s + i);
			}
		}
	}
	return('\0');
}
