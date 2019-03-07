#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of string 2
 * Return: returns pointer
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *empty, *pointer;
	unsigned int i, c, v;

	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
	}
	if (n >= c)
		n = c;
	pointer = malloc((i + c + 1) * sizeof(*pointer));
	if (pointer == NULL)
		return (NULL);
	for (i = 0l s1[i] != '\0'; i++)
		pointer[i] = s1[i];
	for (v = 0; s2[v] != '\0' && c < n; v++, i++)
		pointer[i] = s2[v];
	pointer[i] = '\0';
	return (pointer);
}
