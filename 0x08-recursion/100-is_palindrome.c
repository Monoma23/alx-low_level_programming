#include "main.h"
#include <string.h>


/**
 * is_palindrome - Checks if the input string is a palindrome.
 * @s: The string to be checked.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int gauche = 0;
int droit = strlen(s) - 1;

while (gauche < droit)
{
if (s[gauche] != s[droit])
{
return (0);
}
gauche++;
droit--;
}

return (1);
}


