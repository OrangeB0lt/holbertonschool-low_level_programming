#include "holberton.h"

/**
 * factorial - prints factorial
 * @n: number
 * Returns -1 if error, 0 if n is lower.
 **/

int factorial(int n)
{
	if (n < 2 && n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (0);
	}
}
