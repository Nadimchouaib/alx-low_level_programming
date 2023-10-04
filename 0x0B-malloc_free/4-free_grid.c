#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2-d grid
 * @grid: Pointer to the 2 dimensional array
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
}
