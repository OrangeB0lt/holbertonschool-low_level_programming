#include "holberton.h"

/**
 *
 *
 *
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
 *
 *
 *
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
 *
 *
 *
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
