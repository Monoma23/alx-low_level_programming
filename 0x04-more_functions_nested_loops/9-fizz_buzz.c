#include "main.h"
#include <stdio.h>

/**
* main - display numbers 1 to 100, then new line
* for multiples of three display Fizz
* for the multiples of five prints Buzz
* Return: Always 0
*/
int main(void)
{
int k;

for (k = 1; k <= 100; k++)
{
if (k % 3 == 0 && k % 5 != 0)
{
printf(" Fizz");
}
else if (k % 5 == 0 && k % 3 != 0)
{
printf(" Buzz");
}
else if (k % 3 == 0 && k % 5 == 0)
{
printf(" FizzBuzz");
}
else if (k == 1)
{
printf("%d", k);
}
else
{
printf(" %d", k);
}
}
printf("\n");

return (0);
}


