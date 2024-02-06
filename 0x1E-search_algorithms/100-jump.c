#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searcheingg for value a sorted array of ints
 *               using Jump search algorithm
 * @array: pointer to first element of the array to search i
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t steps, j = 0, r = 0;

	if (!array)
		return (-1);
	steps = (size_t)sqrt(size);
	while ((r < size) && (*(array + r) < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)r, *(array + r));
		j = r;
		r += steps;
		if (j >= size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)j, (int)r);
	r = r >= size ? size - 1 : r;
	for (; (j <= r) && (*(array + j) <= value); j++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)j, *(array + j));
		if (*(array + j) == value)
			return ((int)j);
	}
	return (-1);
}
