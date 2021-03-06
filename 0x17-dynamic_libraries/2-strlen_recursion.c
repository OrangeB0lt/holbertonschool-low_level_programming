#include "holberton.h"

/**
 * _strlen_recursion - returns string length
 * @s: string
 * Return: returns strlen
 **/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
