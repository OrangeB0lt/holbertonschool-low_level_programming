#include "holberton.h"
#include <stdio.h>

/**
 * _put - places a string followed by a new line
 * @str: string needed to be printed
 *
 **/

void _put(char *str);
{
	int i;
	char x;

	for (i = 0; str[i] != 0; i++)
	{
		x = str[i];
		_putchar(x);
	}
	_putchar('\n');
}
