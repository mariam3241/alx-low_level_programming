#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a fun that frees a 2 dimentional grid
 * @grid: parameter
 * @height: parameter
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{

		free(grid[i]);

	}

	free(grid);

}
