#include "function_pointers.h"
/**
 * int_index - return index place if comparison true, ifnot -1
 * @array: array
 * @size: size of elements in arry
 * @cmp: pointer to function of one of the 3
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int h;

if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

for (h = 0; h < size; h++)
{
if (cmp(array[h]))
return (h);
}
return (-1);
}

