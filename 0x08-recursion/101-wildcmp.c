#include "main.h"
#include <stdbool.h>

/**
 * wildcmp - Compares two strings and checks
 * @s1: The first string.
 * @s2: The second string with special character '*'.
 * Return: 1 if the strings can be considered identical, 0 other.
 */
bool wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (true);
}
if (*s1 == *s2 || (*s2 == '*' && *(s2 + 1) != '\0' && wildcmp(s1 + 1, s2)))
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}

return (false);
}
