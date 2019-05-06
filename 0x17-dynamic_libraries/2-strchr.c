#include "holberton.h"

/**
 * _strchr - finds character in a string
 * @s: string
 * @c: characters
 * Return: returns pointer value, or null
 **/

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
