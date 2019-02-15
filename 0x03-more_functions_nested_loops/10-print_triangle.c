#include "holberton.h"

/**
 *
 *
 *
 *
 *
 **/
void print_triangle(int size)
{
	int i, x, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
			{
			        s = size - i - 1;
				if (x < s)
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}
			     _putchar('\n');
		     }
}
