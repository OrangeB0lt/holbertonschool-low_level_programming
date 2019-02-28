#include "holberton.h"

/**
 * sqrt_divisor - finds the square root
 * @i: input number
 * @x: divisor checks if its a sqrt
 * Return: returns natural square root or -1
 **/

int sqrt_divisor(int i, int x)
{
	if (x * x == i)
	{
		return (x);
	}
	else if (x * x > i)
	{
		return (-1);
	}
	return (sqrt_divisor(i, x + 1));
}

/**
 * _sqrt_recursion - sqrt to find natural sqrt
 * @n: number to square
 * Return: returns natural sqrt, otherwise returns -1
 **/

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_divisor(n, 1));
	}
}
