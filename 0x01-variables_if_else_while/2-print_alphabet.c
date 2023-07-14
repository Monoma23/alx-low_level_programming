#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line
 * using the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

  /* Print the alphabet using a loop */
	while (letter <= 'z')
{
	putchar(letter);
	letter++;
}

  /* Print a new line */
	putchar('\n');

	return (0);
}

