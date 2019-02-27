#include "holberton.h"

/**
 * _puts_recursion - prints a string and new line
 * @s: string to print
 **/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	s++;
	_puts_recursion(s);
}
