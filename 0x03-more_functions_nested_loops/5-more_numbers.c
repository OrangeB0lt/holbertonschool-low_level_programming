#include "holberton.h"

/**
 * more_numbers - prints numbers ranging fro 0 to 14 10x
 *
 * Return: no return
 *
 *
 **/

void more_numbers(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}

}
