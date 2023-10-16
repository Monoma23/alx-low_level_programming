#include "main.h"
/**
 * _strlen - returns the longeur of a string
 * @s: string argument
 * Return: longeur
 */
int _strlen(char *s)
{
int longeur = 0;


while (*s != '\0')
{
longeur++;
s++;
}

return (longeur);
}
