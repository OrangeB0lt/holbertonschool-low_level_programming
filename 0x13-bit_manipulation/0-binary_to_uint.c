#include "holberton.h"

/**
 * binary_to_uint - converts binary num as an unsigned int
 * @b: pointer to string with binary nums
 * Return: unsigned int with decimal value of binary number, or 0 if fail
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int index;

	number = 0;
	if (b == NULL)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		number <<= 1;
		if (b[index] == '1')
		{
			number = number + 1;
		}
	}
	return (number);
}
