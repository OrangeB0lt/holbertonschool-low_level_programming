#include "holberton.h"

/**
 * _strstr - function relocates a substring
 * @haystack: string being compared
 * @needle: substring to be located
 * Return: returns null if nothing is found
 **/

char *_strstr(char *haystack, char *needle)
{
	int i, n, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = i, n = 0; needle[n] != '\0'; x++, n++)
		{
			if (needle[n] != haystack[x] || haystack[x] == '\0')
			{
				break;
			}
		}
		if (needle[n] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
