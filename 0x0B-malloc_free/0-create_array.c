#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an ary of chars and initi it with a char.
 * @size: The size of the array to be created.
 * @c: The char with which to initialize the array.
 * Return: A ptr to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}

char *array = malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL);
}

for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}

