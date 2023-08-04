#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the min nbr of cns to
 * make change for an amount of money
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: 0 (Success), 1(Error)
 */
int main(int argc, char *argv[])
{
int num, k, resultat;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

num = atoi(argv[1]);
resultat = 0;

if (num < 0)
{
printf("0\n");
return (0);
}

for (k = 0; k < 5 && num >= 0; k++)
{
while (num >= coins[k])
{
resultat++;
num -= coins[k];
}
}
printf("%d\n", resultat);
return (0);
}

