#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: ary
 * @size: elements to print
 * @action: ptr to print
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int h;

if (array == NULL || action == NULL)
return;

for (h = 0; h < size; h++)
{

action(array[h]);

}
}

