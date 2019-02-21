#include "holberton.h"

/**
 *
 *
 *
 **/

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (n);
}
