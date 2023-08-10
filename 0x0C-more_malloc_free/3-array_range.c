#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min interval of values stored
 * @max: max interval of values stored and nbr of elements
 *
 * Return: ptr to the new array
 */
int *array_range(int min, int max)
{
int *array;
int h, taille;

if (min > max)
return (NULL);

taille = max - min + 1;

array = malloc(sizeof(int) * taille);

if (array == NULL)
return (NULL);

for (h = 0; min <= max; h++)
array[h] = min++;
return (array);
}

