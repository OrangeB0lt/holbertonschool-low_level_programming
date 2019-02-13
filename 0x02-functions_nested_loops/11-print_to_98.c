#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all integets from n to 98
 *
 * @n: integer to start at
 *
 *
 **/

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n++;
		}

		else
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n--;
		}
	}

	printf("98");
	printf("\n");
}
