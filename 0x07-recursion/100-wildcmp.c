#include "holberton.h"

/**
 * wildcmp - compares two strings with possible wildcards
 * @s1: string one, no wildcards
 * @s2: can contain wildcards, string two
 * Return: 1 if the string is identical otherwise 0
 **/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
	{
		return (1);
	}
	else if (*s2 == '*' && *(s1 + 1) != '\0' && *s2 == '\0')
	{
		return (0);
	}
	return (0);
}
