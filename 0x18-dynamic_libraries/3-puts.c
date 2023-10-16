#include "main.h"
/**
 * _puts - prints a string, then a new line
 * @str: the string to eb printed
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

