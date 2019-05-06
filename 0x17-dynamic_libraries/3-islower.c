#include "holberton.h"

/**
 * _islower - returns something depending on the case of the letter
 *
 * @c: character
 *
 * Return: 1 if lower case, otherwise returns 0
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
