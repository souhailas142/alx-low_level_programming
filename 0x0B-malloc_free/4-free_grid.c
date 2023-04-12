#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional
 * @grid: 2D array
 * @height: height
 * Return: SUCCESS
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
