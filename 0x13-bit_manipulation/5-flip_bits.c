#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits to flip from one num
 * to another
 * @n: num 1
 * @m: num 2
 * Return: returns the num of bits needed to flip
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
