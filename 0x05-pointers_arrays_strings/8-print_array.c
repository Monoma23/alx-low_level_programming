#include "main.h"

/**
 * print_array - funct that printing n elements of an array
 * @a: array nom
 * @n: nomber of elements on the array to be printed
 * Return: a &n inputs
 */
void print_array(int *a, int n)
{
int k;

for (k = 0; k < (n - 1); k++)
{
printf("%d, ", a[k]);
}
if (k == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}

