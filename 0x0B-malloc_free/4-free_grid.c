#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid != NULL || height != 0)
	{
		for (n = 0; n < height; n++)
		{
			free(grid[n]);
		}
		free(grid);
	}
}
