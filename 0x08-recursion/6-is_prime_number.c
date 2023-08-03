#include "main.h"
#include <stdbool.h>

/**
 * is_prime_recursive - Recursive helper function
 * to check if a number is prime.
 * @n: The number to be checked.
 * @k: The current potential divisor to check.
 * Return: true if n is prime, false otherwise.
 */
bool is_prime_recursive(int n, int k)
{
if (n <= 1)
{
return (false);
}

if (k * k > n)
{
return (true);
}

if (n % k == 0)
{
return (false);
}

return (is_prime_recursive(n, k + 1));
}

/**
 * is_prime_number - Checks if the input integer is a prime nb
 * @n: The number to be checked.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}

