#include "main.h"
/**
 * puts_half - funct that prints half of string var
 * if number of characs odd n = (length_of_the_string - 1) / 2
 * @str: arg
 * Return: half of entré
 */
void puts_half(char *str)
{
int k, n, longueur;

longueur = 0;

for (k = 0; str[k] != '\0'; k++)
longueur++;

n = (longueur / 2);

if ((longueur % 2) == 1)
n = ((longueur + 1) / 2);

for (k = n; str[k] != '\0'; k++)
_putchar(str[k]);
_putchar('\n');
}

