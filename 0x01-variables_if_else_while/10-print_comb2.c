#include <stdio.h>

/**
 * main - only function, contains commands
 *
 * Return: returns 0 to exit
 */

int main(void)
{
	int n;
	int i;

	for (n = 48; n < 58; n++)
	{
		for (i = 48; i < 58; i++)
		{
			putchar(n);
			putchar(i);
			if (n != 57 || i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
