#include "main.h"
/**
 * reverse_array - Reverses the content of an array.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int debut = 0;
int end = n - 1;
int tempo;

while (debut < end)
{
tempo = a[debut];
a[debut] = a[end];
a[end] = tempo;
debut++;
end--;
}
}
