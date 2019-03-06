#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concats all agruments put in
 * @ac: argument count
 * @av: agrument values
 * Return: returns pointer to a string
 **/

char *argstostr(int ac, char **av)
{
	char *s;
	int i, n, x, l;

	i = n = x = l = 0;

	if (av == 0 || ac == 0)
	{
		return (0);
	}
	for (i = 0; i < ac; l++, i++)
	{
		for (n = 0; av[i][n] != 0; l++, n++)
		{
		}
	}
	l++;
	s = (char *)malloc(sizeof(char) * l);
	if (s == 0)
	{
		free(s);
		return (0);
	}
	i = 0;
	for (i = 0; i < ac; i++, x++)
	{
		for (n = 0; av[i][n] != 0; n++)
		{
			s[x] = av[i][n], x++;
		}
		s[x] = '\n';
	}
	s[x] = 0;
	return (s);
}
