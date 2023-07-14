#include <stdio.h>

/**
 * main - display lowercase alphabets in reverse,
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

