#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a 2
 *      dimensional array of integers
 * @width: the size of width
 * @height: a pointer to a 2 dimensional array
 *
 * Return: NULL if height and width is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int r, c;
	int **meep;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	meep = (int **)malloc(sizeof(int **) * height);

	/*allocating 4 rows*/
	if (meep == NULL)

		return (NULL);

	for (r = 0; r < height; r++)
	{
		meep[r] = (int *)malloc(sizeof(int *) * width);

			if (meep[r] == NULL)
			{
				for (; r >= 0; r--)
					free(meep[r]);

				free(meep);
				return (NULL);
			}

	}

	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		meep[r][c] = 0;
	}

	return (meep);
}
