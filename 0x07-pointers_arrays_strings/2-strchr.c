#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be seched.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of the characte
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
