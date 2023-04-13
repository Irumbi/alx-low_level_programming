#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Free a 2 dimensional of grid alloc function.
 *@grid: The grid to free.
 *@height: The height of the grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
