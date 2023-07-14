#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - display the alphabet lower except q and e.
 *
 * Return: Always 0
 */
int main(void)
{
	int j;

	for (j = 97; j < 123; j++)
	{
		if (j != 101 && j != 113)
		{
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}

