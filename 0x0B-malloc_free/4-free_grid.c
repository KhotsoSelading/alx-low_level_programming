#include "main.h"

/**
 * free_grid - frees 2 dimensional grid.
 *
 * @grid: multi-dimensional array of integers.
 * @height: grid height.
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
