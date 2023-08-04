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
int k, h, n, longueur, f, digt;

k = 0;
h = 0;
n = 0;
longueur = 0;
f = 0;
digt = 0;
while (s[longueur] != '\0')
longueur++;
	while (k < longueur && f == 0)
	{
		if (s[k] == '-')
			++h;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digt = s[k] - '0';
			if (h % 2)
				digt = -digt;
			n = n * 10 + digt;
			f = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			f = 0;
		}
		k++;
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
	int result, nbr1, nbr2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nbr1 = _atoi(argv[1]);
	nbr2 = _atoi(argv[2]);
	result = nbr1 * nbr2;

	printf("%h\n", result);

	return (0);
}

