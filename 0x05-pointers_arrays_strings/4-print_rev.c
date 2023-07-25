#include "main.h"
/**
 * print_rev - imprime reverded string
 * @s: string arg
 * return: 0
 */
void print_rev(char *s)
{

char *longuer = s;
while (*longuer != '\0')
{
longuer++;
}

longuer--;

while (longuer >= s)
{
_putchar(*longuer);
longuer--;
}

_putchar('\n');
}

