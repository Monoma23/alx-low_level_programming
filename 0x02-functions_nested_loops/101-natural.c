#include <stdio.h>

/**
* main - displays the natural numbers strictly below 1024 
*        and multiples of 3 or 5
*
* Return: it is  0.
*/
int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			sum += a;
	}

	printf("%d\n", sum);

	return (0);
}

