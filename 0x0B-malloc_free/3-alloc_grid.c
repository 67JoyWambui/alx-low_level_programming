#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 * @width: the width of the grid
 * @height: the length of the grid
 *
 * Return: NULL if not successful
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int m, n;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		grid[m] = malloc(sizeof(int) * width);

		if (grid[m] == NULL)
		{
			for (; m >= 0; n++)
			{
				free(grid[n]);
			}
			free(grid);
			return (NULL);
		}
	}

	/*initializing the elements of grid to 0*/
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			grid[m][n] = 0;
	}

	return (grid);
}
