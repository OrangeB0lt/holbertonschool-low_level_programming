#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string itself
 *
 **/

void rev_string(char *s)
{
	int i, x;
	char n;

	for (i = 0; s[i] != 0; i++)
	{
	}

	x = 0;
	i = i - 1;
	while (x < i)
	{
		n = s[i];
		s[i] = s[x];
		s[x] = n;
		x++;
		i--;
	}
}
