#include "holberton.h"

/**
 * print_binary - prints out binary unsigned long ints
 * @n: number to be converted into binary
 * Return: returns none
 **/

void print_binary(unsigned long int n)
{
	unsigned long int temporary, mask, flag;
	int index;

	index = sizeof(unsigned long int) * 8 - 1;
	flag = 0;
	mask = 1;
	for (; index >= 0; index--)
	{
		temporary = n >> index;
		if ((temporary & mask) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			flag = 1;
			_putchar('1');
		}
	}
	if (n == 0)
		_putchar('0');
}
