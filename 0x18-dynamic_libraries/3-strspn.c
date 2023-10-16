#include "main.h"

/**
 * _strspn - Gets the length of k prefix substring.
 * @s: Pointer to the string to be checked.
 * @accept: Pointer to the set of characters to be accepted.
 *
 * Return: The number of bytes in the initial segment of s...
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int is_acceptable = 1;

while (*s && is_acceptable)
{
char *k = accept;
is_acceptable = 0;

while (*k)
{
if (*s == *k)
{
is_acceptable = 1;
break;
}
k++;
}

if (is_acceptable)
{
length++;
s++;
}
}

return (length);
}



