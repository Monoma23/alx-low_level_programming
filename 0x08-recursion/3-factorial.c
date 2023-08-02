#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which factorial is calculated.
 * Return: Factorial of n, or -1 for an error.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

