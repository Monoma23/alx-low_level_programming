#include "main.h"
#include <stdbool.h>

/**
 * is_divisible - Checks if a number is divisible by any other
 * @n: The number to be checked.
 * @divisor: The potential divisor to check.
 * Return: true if n is divisible by divisor, false otherwise.
 */
bool is_divisible(int n, int divisor)
{
if (divisor == 1)
{
return (false);
}

if (n % divisor == 0)
{
return (true);
}

if (divisor * divisor > n)
{
return (false);
}

return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - Checks if the input integer is a prime
 * @n: The number to be checked.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (!is_divisible(n, 2));
}
