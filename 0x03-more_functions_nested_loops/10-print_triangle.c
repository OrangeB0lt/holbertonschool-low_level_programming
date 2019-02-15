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
	int i, x, n;

	if (size <=0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++0)
			{
				n = size - 1 - i;
				if ( i > x )
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}
			     _putchar('\n');
		     }
}
