#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints out a specified number in an array
 * @a: is the array you need to print from
 * @n: is the number needed to be printed
 **/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
