#include "main.h"
#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome_recursive - Recursive helper function
 * to check if the string is a palindrome.
 * @s: The string to be checked.
 * @gauche: The gauche index of the current comparison.
 * @right: The right index of the current comparison.
 * Return: true if s is a palindrome, false otherwise.
 */
bool is_palindrome_recursive(char *s, int gauche, int right)
{
if (gauche >= right)
{
return (true);
}

if (s[gauche] != s[right])
{
return (false);
}

return (is_palindrome_recursive(s, gauche + 1, right - 1));
}

/**
 * is_palindrome - Checks if the input string is a palindrome.
 * @s: The string to be checked.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int gauche = 0;
int right = strlen(s) - 1;

return (is_palindrome_recursive(s, gauche, right));
}

