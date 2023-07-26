#include "main.h"
/**
 * string_toupper - Changes all lowercase  of a string to uppercase.
 * @stringo: Pointer to the input str.
 *
 * Return: A pointer to the modified str.
 */
char *string_toupper(char *stringo)
{
char *ptr = stringo;
while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 'a' + 'A';
}
ptr++;
}
return (stringo);
}
