#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: SUCCESS
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (0);
	grid = malloc(height * sizeof(int *));
	if (grid == 0)
		return (0);
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (0);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

