#include "holberton.h"
/**
 * puts2 - prints out every other character in a string
 * @str: string printing out
 *
 **/

void puts2(char *str)
{
	int i;
	char x;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			x = str[i];
			_putchar(x);
		}
	}
	_putchar('\n');
}
