#include "holberton.h"

/**
 * string_toupper - makes lower case letters in string upper case
 * @n: the string
 * Return: returns the fixed string
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
