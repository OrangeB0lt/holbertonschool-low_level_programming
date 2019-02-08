#include <stdio.h>

/**
 * main - only function, contains commands
 *
 * Return: returns 0 to exit
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
