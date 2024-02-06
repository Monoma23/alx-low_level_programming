#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Printing array of ints
 *
 * @array:array to be printed
 * @size: number of elements in array
 */
void print_array(const int *array, size_t size)
{
	size_t k;

	printf("Searching in array: ");
	for (k = 0; k < size; k++)
	{
		if (k > 0)
			printf(", ");
		printf("%d", array[k]);
	}
	printf("\n");
}

/**
 * binary_search - Searching for value in sorted array of ints
 *
 * @array: Pointer to first element of array to search in
 * @size: Number of elmnts in array
 * @value: value to search for
 *
 * Return:first index where value is located or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t high = size - 1;
	size_t mediane;

	if (!array)
		return (-1);

	while (l <= high)
	{
		print_array(array + l, high - l + 1);
		mediane = l + (high - l) / 2;
		if (array[mediane] == value)
			return (mediane);
		if (array[mediane] < value)
			l = mediane + 1;
		else
			high = mediane - 1;
	}

	return (-1);
}
