#include "holberton.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: returns string
 **/

char *cap_string(char *n)
{
	int i;

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (i = 1; n[i] != '\0'; i++)
	{
		if ((n[i - 1] == ' ' || n[i - 1] == '\n' || n[i - 1] == '\t'
		     || n[i - 1] == '"' || n[i - 1] == '!' || n[i - 1] == '('
		     || n[i - 1] == ')' || n[i - 1] == ',' || n[i - 1] == ';'
		     || n[i - 1] == '?' || n[i - 1] == '{' || n[i - 1] == '}'
		     || n[i - 1] == '.') && (n[i] > 'a' && n[i] < 'z'))
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
