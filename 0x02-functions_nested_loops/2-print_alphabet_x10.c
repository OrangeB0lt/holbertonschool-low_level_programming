#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in all lower case 10 times
 *
 * Description: prints alphabet in all lowercase, prints new line
**/

void print_alphabet_x10(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i++);
		}
		_putchar('\n');
		n++;
	}
}
