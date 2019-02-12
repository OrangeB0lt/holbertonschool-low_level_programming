#include "holberton.h"

/**
 * print_alphabet - uses a forloop to print the alphabet in all lower case
 *
 * Description: prints alphabet in all lowercase, prints new line
**/

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i++);
	}
	_putchar('\n');
}
