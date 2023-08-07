#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid -Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The pointer to the 2-dimensional array.
 * @height: The height (number of rows) of the grid.
 */
void free_grid(int **grid, int height)
{
if (grid == NULL)
{
return;
}
for (int i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

