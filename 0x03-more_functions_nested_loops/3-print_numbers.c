#include "holberton.h"

/**
 * print_numbers - prints 0 - 9
 *
 * Return: none
 *
 *
 **/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
