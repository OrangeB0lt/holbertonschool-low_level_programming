#include "holberton.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: num to set
 * @index: index for bit
 * Return: returns 1 if it worked, or -1 if error
 *
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
