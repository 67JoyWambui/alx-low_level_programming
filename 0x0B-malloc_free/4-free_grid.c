#include "main.h"
#include <stdlib.h>

/**
 *free_grid - a function that frees a 2 dimensional grid
 *	previously created by your alloc_grid function
 * @grid: the 2 dimensional grid
 * @height: height of the grid
 *
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	if (j < height)
	{
		j++;

		free(grid[j]);
	}

	free(grid);
}
