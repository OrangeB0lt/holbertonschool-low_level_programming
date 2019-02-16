#include <stdio.h>

/**
 *
 *
 *
 *
 *
 **/

int main(void)
{
	int o, i;

	for (o = 0; o < 9; o++)
	{
		for (i = 0; i <=9; i++)
		{
			if ((i > o) && (o != 8))
			{
				putchar(o + '0');
				putchar(i + '0');
				putchar(',');
				putchar(' ');
			}
			else if ((i > o) && (o == 8))
			{
				putchar(o + '0');
				putchar(i + '0');
				putchar('\n');
			}
		}
	}
}
