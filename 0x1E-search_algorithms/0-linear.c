#include "search_algos.h"

/**
 * linear_search - searching for value in arr of
 * ints using Linear to search algorithm
 *
 * @array: input array
 * @size: size of array
 * @value: val target
 * Return: EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < (int)size; k++)
	{
		printf("Value checked array[%u] = [%d]\n", k, array[k]);
		if (value == array[k])
			return (k);
	}
	return (-1);
}
