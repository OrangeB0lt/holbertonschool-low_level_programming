#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returns a combined string of two other strings
 * @s1: first string
 * @s2: second string
 * Return: returns pointer to concat string
 **/

char *str_concat(char *s1, char *s2)
{
	char *st;
	unsigned int i, n, l1, l2;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != 0; l1++)
	{
	}
	for (l2 = 0; s2[l2] != 0; l2++)
	{
	}
	l2++;
	st = malloc(sizeof(char) * (l1 + l2));

	for (i = 0; i < l1; i++)
	{
		st[i] = s1[i];
	}
	for (n = 0; n < l2; n++, i++)
	{
		st[i] = s2[n];
	}
	return (st);
}
