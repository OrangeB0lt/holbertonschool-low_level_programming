#include "holberton.h"

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
