#include "holberton.h"

/**
 * main - function prints the word holberton one letter at a time
 *
 * Reaturn: returns 0 to exit
 **/

int main (void)
{
	int i = 0;
	char hol[] = "Holberton";

	while (hol[i] != '\0')
	{
		_putchar(hol[i++]);
	}
	_putchar('\n');
	return (0);
}
