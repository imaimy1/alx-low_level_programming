#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			while (i >= 0)
				free(g[i--]);
			free(g);
			return (NULL);
		}


		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}
