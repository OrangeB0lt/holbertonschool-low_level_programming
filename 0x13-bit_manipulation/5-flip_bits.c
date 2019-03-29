#include "holberton.h"

/**
 *
 *
 *
 *
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index;
	unsigned long int number;

	number = n ^ m;
	index = 0;
	while (number > 0)
	{
		if ((number & 1) != 0)
			index++;
		number = number >> 1;
	}
	return (index);
}
