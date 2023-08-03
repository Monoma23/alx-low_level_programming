#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is calculated.
 * Return: The natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
int min = 0;
int high = n;

if (n < 0)
{
return (-1);
}

if (n == 0 || n == 1)
{
return (n);
}


while (min <= high)
{
int mid = (min + high) / 2;
int square = mid * mid;

if (square == n)
{
return (mid);
}
else if (square < n)
{
min = mid + 1;
}
else
{
high = mid - 1;
}
}

return (-1);
}

