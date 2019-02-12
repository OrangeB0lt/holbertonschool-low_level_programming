#include "holberton.h"

/**
 * _isalpha - returns something depending on the case of the letter
 *
 * @c: character
 *
 * Return: 1 if a letter, otherwise returns 0
 **/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
