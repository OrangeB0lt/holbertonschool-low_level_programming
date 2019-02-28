#include "holberton.h"

/**
 * _pow_recursion - return x to the power of y
 * @x: base value
 * @y: value to raise base by
 * Return: risen value
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
