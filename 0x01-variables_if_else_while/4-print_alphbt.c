#include <stdio.h>

/**
 * main - only function, containing commands
 *
 * Return: returns 0 to exit
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		putchar (c);
	}
	putchar('\n');
	return (0);
}
