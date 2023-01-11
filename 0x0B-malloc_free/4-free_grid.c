#include "main.h"
/**
 * free_grid - alloctes a grid, makes and free space
 * @grid: take in width of grid
 * @height: height of grid
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	return (free grid);
}
