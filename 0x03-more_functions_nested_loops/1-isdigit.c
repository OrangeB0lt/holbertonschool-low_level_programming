#include "holberton.h"

/**
 * _isdigit - is the function that determins if the input is a digit
 * @c: input of variable
 *
 * Return: returns 1 if input is a digit, 0 if it is anything else
 *
 **/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
