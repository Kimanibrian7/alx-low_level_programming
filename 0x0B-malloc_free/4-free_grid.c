#include "main.h"

/**
 * free_grid - frees the memories formed by the grid function
 * @grid: the pointer to the 2D array
 * @height: the height of the array
 * Return: NULL
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
