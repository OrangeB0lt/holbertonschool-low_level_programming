#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - prints our strings as integers
 * @s: the string being converted
 * Return: return the integer
 **/

int _atoi(char *s)
{
	int n, i, x;

	x = 1;
	i = n = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
		{
			x = x * -1;
		}
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	x = x * -1;
	return (x * n);
}
