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
	unsigned int i, c;

	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	pointer = malloc(i + (n * sizeof(*s2) + 1) * sizeof(*pointer));
	if (pointer == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		pointer[i] = s1[i];
	for (c = 0; s2[c] != '\0' && c < n; c++, i++)
		pointer[i] = s2[c];
	pointer[i] = '\0';
	return (pointer);
}
int main(void)
{
	char *concat;

	concat = string_nconcat("Holberton ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
