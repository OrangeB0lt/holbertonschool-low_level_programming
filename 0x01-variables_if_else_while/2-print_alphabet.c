#include <stdio.h>

/**
 * main - only function, holding commands
 *
 * Return: returns 0 to exit
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar (c);
	putchar('\n');
	return (0);
}
