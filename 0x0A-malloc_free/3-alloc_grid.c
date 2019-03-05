#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates space for a 2D integer grid
 * @width: grid width
 * @height: grid height
 * Return: returns pointers to newly made grid
 **/

int **alloc_grid(int width, int height)
{
	int **a;
	int i, n;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (--i; i>= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
		{
			a[i][n] = 0;
		}
	}
	return (a);
}
