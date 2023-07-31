#include "main.h"

/**
 * _strpbrk - Searches b string for any of b set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the set of bytes to be searched for.
 *
 * Return: A pointer to the byte in s that matches one of t
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *b = accept;

while (*b)
{
if (*s == *b)
{
return (s);
}
b++;
}

s++;
}

return (NULL);
}


