#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nestd loop to make grd
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. arry
 */
int **alloc_grid(int width, int height)
{
	int **target;
	int z, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	target = malloc(sizeof(int *) * height);
	if (target == NULL)
		return (NULL);
	for (z = 0; z < height; z++)
	{
		target[z] = malloc(sizeof(int) * width);
		if (target[z] == NULL)
		{
			for (; z >= 0; z--)
				free(target[z]);
			free(target);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (h = 0; h < width; h++)
			target[z][h] = 0;
	}

	return (target);
}

