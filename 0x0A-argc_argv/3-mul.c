#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: string to be convert
 *
 * Return: the int converted from the str
 */
int _atoi(char *s)
{
	int counter, d, n, longueur, f, dig;
	counter = 0;
	d = 0;
	n = 0;
	longueur = 0;
	f = 0;
	dig = 0;
	while (s[longueur] != '\0')
		longueur++;
	while (counter < longueur && f == 0)
	{
if (s[counter] == '-')
			++d;
		if (s[counter] >= '0' && s[counter] <= '9')
		{
			dig = s[counter] - '0';
			if (d % 2)
				dig = -dig;
			n = n * 10 + dig;
			f = 1;
			if (s[counter + 1] < '0' || s[counter + 1] > '9')
				break;
			f = 0;
		}
		counter++;
	}

	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, nb1, nb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nb1 = _atoi(argv[1]);
	nb2 = _atoi(argv[2]);
	result = nb1 * nb2;

	printf("%d\n", result);

	return (0);
}

