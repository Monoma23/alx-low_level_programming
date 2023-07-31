#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matr
 * @a: Pointer to the 2D array representing the square matrix.
 * @size: Size of the square matrix (number of rows and columns).
 */
void print_diagsums(int *a, int size)
{
int somme = 0;
int sum2 = 0;

for (int i = 0; i < size; i++)
{
somme += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}

printf("Sum of the main diagonal: %d\n", somme);
printf("Sum of the secondary diagonal: %d\n", sum2);
}

