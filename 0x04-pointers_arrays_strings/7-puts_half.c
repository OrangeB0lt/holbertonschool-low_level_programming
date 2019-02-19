#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string used
 *
 **/

void puts_half(char *str)
{
	int i, x;
	char n;

	for (i = 0; str[i] != 0; i++)
	{
	}

	x = (i + 1) / 2;
	for (; str[x] != 0; x++)
	{
		n = str[x];
		_putchar(n);
	}
	_putchar('\n');
}
