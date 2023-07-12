#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}

