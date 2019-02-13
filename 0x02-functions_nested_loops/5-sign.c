#include "holberton.h"

/**
 * print_sign - print sign of number
 *
 * @n: number to check sign
 *
 * Return: 1 if protive, 0 if 0, -1 is negative
 *
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
