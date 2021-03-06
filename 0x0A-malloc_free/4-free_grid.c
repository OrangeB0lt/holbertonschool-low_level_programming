#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2D grid
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: returns nothing
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
