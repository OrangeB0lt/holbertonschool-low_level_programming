#include "holberton.h"

/**
 * rot13 - converts string to rot13
 * @n: the string
 * Return: returns the edited string
 **/

char *rot13(char *n)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		while ((n[i] >= 'A' && n[i] <= 'Z') ||
		       (n[i] >= 'a' && n[i] <= 'z'))
		{
			if ((n[i] >= 'N' && n[i] <= 'Z') ||
			    (n[i] >= 'n' && n[i] <= 'z'))
			{
				n[i] -= 13;
			}
			else
			{
				n[i] +=13;
			}
			i++;
		}
		i++;
	}
	return (n);
}
