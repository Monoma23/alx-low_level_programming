#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is calculated.
 * Return: The natural square root of n, or -1 if n does n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0 || n == 1)

