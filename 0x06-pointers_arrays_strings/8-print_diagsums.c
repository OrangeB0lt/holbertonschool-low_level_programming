#include "holberton.h"

/**
 * print_diagsums - prints the sum of two diagonal ints in a matrix
 * @a: array
 * @size: size of array
 **/
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size * size; i += (size + 1))
		s1 += a[i];
	for (i = size - 1; i < (size * size) - (size - 1); i += (size - 1))
		s2 += a[i];
	printf("%d, %d\n", s1, s2);

}
