#include "holberton.h"

/**
 * _abs - find absolute value of number put in
 *
 * @n: number to check
 *
 * Return: returns absolute value of the integer
 **/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}

	return (n);
}
