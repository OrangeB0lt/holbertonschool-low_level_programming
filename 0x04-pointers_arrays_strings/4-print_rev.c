#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 *
 **/

void print_rev(char *s)
{
	int i;
	char x;

	for (i = 0; s[i] != 0; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		x = s[i];
		_putchar(x);
	}
	_putchar('\n');
}
