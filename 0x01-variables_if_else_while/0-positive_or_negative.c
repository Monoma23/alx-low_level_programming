#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - this is the main function of the program
 *it checks if an integer is positif or negatif
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive \n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero \n", n);
	}
	else
	{
		printf("%d is negative \n", n);
	}
	return (0);
}
