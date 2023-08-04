#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: string to be convd
 *
 * Return: the int conv from the str
 */
int _atoi(char *s)
{
int j, g, m, longueur, f, digit;
j = 0;
g = 0;
m = 0;
longueur = 0;
f = 0;
digit = 0;

while (s[longueur] != '\0')
longueur++;

while (j < longueur && f == 0)
{
if (s[j] == '-')
++g;

if (s[j] >= '0' && s[j] <= '9')
{
digit = s[j] - '0';
if (g % 2)
digit = -digit;
m = m * 10 + digit;
f = 1;
if (s[j + 1] < '0' || s[j + 1] > '9')
break;
f = 0;
}
j++;
}

if (f == 0)
return (0);

return (m);
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
printf("Error\m");
return (1);
}

nbr1 = _atoi(argv[1]);
nbr2 = _atoi(argv[2]);
result = nbr1 *nbr2;
printf("%g\m", result);
return (0);
}
