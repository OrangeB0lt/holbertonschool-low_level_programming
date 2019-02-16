#include <stdio.h>

/**
 * main - prints all number 01-100 except ones already shown
 *
 * Return: returns 0 to end program
 *
 *
 **/

int main(void)
{
	int o, i;

	for (o = 0; o < 9; o++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i > o)
			{
				putchar(o + '0');
				putchar(i + '0');

				if (o != 8)
				{
					putchar(',');
					putchar(' ');
				}
				else if (o == 8)
				{
					putchar('\n');
				}
			}
		}
	}
	return (0);
}
