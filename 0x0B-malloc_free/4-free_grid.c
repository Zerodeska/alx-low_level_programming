#include "main.h"

/**
 * free_grid - free allocated memory
 *
 * @grid: the passed 2D array
 * @height: the heghit of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

