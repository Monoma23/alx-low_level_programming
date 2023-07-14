#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0
 */
int main(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		printf("%d", j);
	}
	putchar('\n');
	return (0);
}
