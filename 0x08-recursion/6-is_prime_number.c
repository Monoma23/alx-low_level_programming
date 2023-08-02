#include "main.h"

/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The number to be checked.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

for (int k = 2; k * k <= n; k++)
{
if (n % k == 0)
{
return (0);
}
}

return (1);
}


