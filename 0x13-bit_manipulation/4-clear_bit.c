#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at index
 * @n: number to set
 * @index: index of bit
 * Return: 1 if it works, -1 if failed
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int delete;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	delete = ~(1 << index);
	*n = *n & delete;
	return (1);
}
