#include "holberton.h"

/**
 * leet - encodes a string into leet speak (1337)
 * @n: string
 * Return: returns edited string
 **/

char *leet(char *n)
{
	int i, x, e;

	char letters[] = "eEaAtTlLoO";
	char leets[] = "3344771100";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; letters[x] != '\0'; x++)
		{
			e = 0;
			if (n[i] == letters[x])
			{
				e = x;
				n[i] = leets[e];
			}
		}
	}
	return (n);
}
