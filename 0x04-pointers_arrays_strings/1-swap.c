#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps places of integers
 * @a: first integer
 * @b: second integer
 *
 **/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
