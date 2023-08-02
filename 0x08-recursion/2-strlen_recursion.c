#include "main.h"


/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string for which the length is calculated.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

