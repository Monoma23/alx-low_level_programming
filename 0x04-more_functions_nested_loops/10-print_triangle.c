#include "main.h"
/**
 * print_triangle - afficher un triangle, suivée par new line
 * @size: size of triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, k;

for (i = 1; i <= size; i++)
{
for (k = i; k < size; k++)
{
_putchar(' ');
}

for (k = 1; k <= i; k++)
{
_putchar('#');
}

_putchar('\n');
}
}
}

