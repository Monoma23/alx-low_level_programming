#include <stdio.h>
#include <math.h>

/**
 * main - displays the largest prime factor of a number 612852475143
 * then a new line
 * Return: Always 0
 */
int main(void)
{
long int x;
long int maximum;
long int k;
x = 612852475143;
maximum = -1;
while (x % 2 == 0)
{
maximum = 2;
x /= 2;
}

for (k = 3; k <= sqrt(x); k = k + 2)
{
while (x % k == 0)
{
maximum = k;
x = x / k;
}
}

if (x > 2)
maximum = x;
printf("%ld\n", maximum);
return (0);
}

