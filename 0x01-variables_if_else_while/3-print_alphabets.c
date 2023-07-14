#include <stdio.h>

/**
 * main - display llower and uper case alphabet.
 *
 * Return: always 0
 */
int main(void)
{
char LowerUper[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 1; i <= 52; i++)
	{
		putchar(LowerUper[i]);
	}
	putchar('\n');
	return (0);
}

