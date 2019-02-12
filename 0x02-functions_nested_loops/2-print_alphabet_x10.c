#include "holberton.h"

/**
 * print_alphabet_x10 -   prints the alphabet in all lower case 10 times
 *
 * Description: prints alphabet in all lowercase, prints new line
**/

void print_alphabet_x10(void);
{
	char i = 'a';
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		while (i <= 'z')
		{
			_putchar(i++);
		}
	_putchar('\n');
	}
}
