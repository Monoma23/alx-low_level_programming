#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d aray
 * @grid: bidimensin grid
 * @height: height dimension of grid
 * Description: free memory of grid
 * Return: vide
 *
 */
void free_grid(int **grid, int height)
{
	int k;

for (k = 0; k < height; k++)
{
free(grid[k]);
}
free(grid);
}

