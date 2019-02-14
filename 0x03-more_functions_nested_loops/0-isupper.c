#include "holberton.h"

/**
 * _isupper - returns a 1 or 0 depending on if the letter is uppercase or lower
 * @c: C is the letter the function is checking
 *
 * Return: return 1 is uppercase or 0 if lower
 *
 **/

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
