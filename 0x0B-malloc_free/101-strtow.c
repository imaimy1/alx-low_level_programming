#include "main.h"
#include <stdlib.h>
/**
 * _free_grid - free grid.
 * @grid: input
 * @height: input
 */
void _free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits a string into words.
 * @str: input
 * Return: 0
 */
char **strtow(char *str)
{
	char **x;
	unsigned int c, height, i, j, a;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	x = malloc((height + 1) * sizeof(char *));
	if (x == NULL || height == 0)
	{
		free(x);
		return (NULL);
	}
	for (i = a = 0; i < height; i++)
	{
		for (c = a; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				x[i] = malloc((c - a + 2) * sizeof(char));
				if (x[i] == NULL)
				{
					_free_grid(x, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a <= c; a++, j++)
			x[i][j] = str[a];
		x[i][j] = '\0';
	}
	x[i] = NULL;
	return (x);
}
