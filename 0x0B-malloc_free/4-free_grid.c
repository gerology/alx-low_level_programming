#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees ,memory refrenced  by pointrer
 *
 * @grid: a grid of integers
 * @height: the height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
