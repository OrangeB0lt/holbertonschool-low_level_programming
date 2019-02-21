#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: number of array sections to reverse
 *
 **/

void reverse_array(int *a, int n)
{
	int i, x, e;

	i = 0;
	n -= 1;

	while (i < n)
	{
		x = a[i];
		e = a[n];
		a[i++] = e;
		a[n--] = x;
	}
}
