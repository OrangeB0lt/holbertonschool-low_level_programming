#include "holberton.h"

/**
 * print_alpabet - uses a forloop to print the alphabet in all lower case
 *
 * Description: prints alphabet in all lowercase, prints new line
**/

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
