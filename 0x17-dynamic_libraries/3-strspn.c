#include "holberton.h"

/**
 * _strspn - finds length of prefix substring
 * @s: string
 * @accept: accept string
 * Return: returns the count of accept
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, n, e = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				e++;
				break;
			}
		}
		if (s[i] != accept[n])
		{
			break;
		}
	}
	return (e);
}
