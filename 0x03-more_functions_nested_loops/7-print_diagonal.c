#include "holberton.h"

/**
* print_diagonal - the function prints \ in a diagonal pattern
*
* @n: size of diagonal
*
* Return: none
**/

void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		for (x = 0; x < n; x++)
		{
			if (x != i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
