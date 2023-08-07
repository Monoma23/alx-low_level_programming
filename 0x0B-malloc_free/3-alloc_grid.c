#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: The width (number of columns) of the gridd.
 * @height: The height (number of rows) of the gridd.
 * Return: A pointer to the allocated 2-dimensional array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
int **gridd = (int **)malloc(height * sizeof(int *));

if (gridd == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
gridd[i] = (int *)malloc(width * sizeof(int));
if (gridd[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(gridd[j]);
}
free(gridd);
return (NULL);
}

for (j = 0; j < width; j++)
{
gridd[i][j] = 0;
}
}

return (gridd);
}



