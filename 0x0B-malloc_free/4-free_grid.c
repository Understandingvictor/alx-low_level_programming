/**
  *free_grid - frees the 2D grid previously created by alloc_grid function
  *@grid: grid to free
  *@height: number of rows of grid
  *Return: 0 upon completion
  */
#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
