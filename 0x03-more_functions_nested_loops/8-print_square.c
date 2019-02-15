#include "holberton.h"

/**
 * print_square - prints a square of #
 *
 * @size: size of the square
 *
 * Return: none
 **/

void print_square(int size)
{
	int i, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
