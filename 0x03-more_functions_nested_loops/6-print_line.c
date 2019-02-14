#include "holberton.h"

/**
 * print_line - prints a straight line in terminal
 *
 * @n: number of times _ is placed
 *
 * Return: none
 **/

void print_line(int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
