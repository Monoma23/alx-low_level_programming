#include <stdio.h>

/**
 * main - display all combinations of single-digit numbers
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 28; a < 38; a++)
	{
		putchar(a);
		if (a != 37)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
