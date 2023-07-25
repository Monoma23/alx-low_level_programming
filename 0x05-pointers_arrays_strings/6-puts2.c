#include "main.h"
/**
 * puts2 - function  prints just one character
 * at starting with the first
 * @str: entre
 * Return: noo
 */
void puts2(char *str)
{
int longueur = 0;
int temp = 0;
char *x = str;
int origin;

while (*x != '\0')
{
x++;
longueur++;
}
temp = longueur - 1;
for (origin = 0 ; origin <= temp ; origin++)
{
if (origin % 2 == 0)
{
_putchar(str[origin]);
}
}
_putchar('\n');
}

