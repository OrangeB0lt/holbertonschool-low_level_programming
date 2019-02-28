#include "holberton.h"

/**
 * _strlen - string length
 * @n: the string
 * Return: integer length
 **/

int _strlen(char *n)
{
	if (*n == '\0')
	{
		return (0);
	}
	return (_strlen(++n) + 1);
}

/**
 * palindrome_check - checks if the numbers are equal
 * @s: input string
 * @i: start index
 * @x: end index
 * Return: return boolean answer
 **/

int palindrome_check(char *s, int i, int x)
{
	if ((x - i) < 2)
	{
		return (s[i] == s[x] ? 1 : 0);
	}
	else if (s[i] != s[x])
	{
		return (0);
	}
	return (palindrome_check(s, ++i, --x));
}



/**
 * is_palindrome - checks if string is a palindrom
 * @s: input string
 * Return: boolean answer
 **/

int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length < 2)
	{
		return (1);
	}
	return (palindrome_check(s, 0, --length));
}
