#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Return: A pointer to the beginning of the located substr,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}

while (*haystack)
{
char *k = haystack;
char *n = needle;

while (*n && *k == *n)
{
k++;
n++;
}

if (*n == '\0')
{
return (haystack);
}

haystack++;
}

return (NULL);
}

