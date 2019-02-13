#include "holberton.h"

/**
 * times_table - prints 0-9 multiplication tables
 **/

void times_table(void)
{
	int n = 0;
	int i = 1;

	while (n < 10)
	{
		_putchar('0');
		{
			i = 1;
			while (i < 10)
			{
				int x = i * n;

				if (x < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				i++;
			}
			_putchar('\n');
			n++;
		}
	}
}
