#include "holberton.h"

/**
 * get_bit - returns value of bit at given index
 * @n: number of check bits
 * @index: index of given bits
 * Return: value of bit, or -1 if an error
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int checker, divisor;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = m & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
