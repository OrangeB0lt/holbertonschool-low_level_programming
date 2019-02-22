#include "holberton.h"

/**
 * rot13 - converts string to rot13
 * @n: the string
 * Return: returns the edited string
 **/

char *rot13(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if ((n[i] >= 'A' && n[i] <= 'M' || n[i] >= 'a' && n[i] <= 'm'))
		{
			n[i] = n[i] + 13;
		}
		else if ((n[i] >= 'N' && n[i] <= 'Z') ||
			 (n[i] >= 'n' && n[i] <= 'z'))
		{
			n[i] = n[i] - 13;
		}
	}
	return (n);
}
