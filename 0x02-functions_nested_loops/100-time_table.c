#include "holberton.h"

/**
 * print_times_table - print times tables from zero to n
 * @n: integer
 */

void print_times_table(int n)
{
	int i = 0;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			int x = 1;

			_putchar('0');
			while (x <= n)
			{
				int o = i * x;

				_putchar(',');
				_putchar(' ');
				if (o < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(o + '0');
				}
				else if (o > 99)
				{
					_putchar((o / 100) + '0');
					_putchar(((o / 10) % 10) + '0');
					_putchar((o % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((o / 10) + '0');
					_putchar((o % 10) + '0');
				}
				x++;
			}
			_putchar('\n');
			i++;
		}
	}
}
