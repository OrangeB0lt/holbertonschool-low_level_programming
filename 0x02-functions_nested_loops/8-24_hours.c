#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day in military time
 **/

void jack_bauer(void)
{
	int i = 0;
	int x = 0;

	while (i < 24)
	{
		while (x < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
			x++;

		}
		i++;
		x = 0;
	}
}
