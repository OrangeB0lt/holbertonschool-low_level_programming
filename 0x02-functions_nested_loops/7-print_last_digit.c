#include "holberton.h"

/**
 * print_last_digit - prints the last digit of the number
 *
 * @n: is number
 *
 * Return: returns last digit
 **/

int print_last_digit(int n)
{
	int i = n % 10;

	if (i >= 0)
	{
		_putchar(i + '0');
		return (i);
	}
	else
	{
		_putchar(-i + '0');
		return (-i);
	}
}
