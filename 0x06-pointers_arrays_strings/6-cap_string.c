#include "main.h"
/**
 * cap_string - Capitalises words of a string.
 * @stringo: The stringo w'll be capitalised
 *
 * Return: A pointer to new string.
 */
char *cap_string(char *stringo)
{
int j = 0;

while (stringo[j])
{
while (!(stringo[j] >= 'a' && stringo[j] <= 'z'))
j++;

if (stringo[j - 1] == ' ' ||
stringo[j - 1] == '\t' ||
stringo[j - 1] == '\n' ||
stringo[j - 1] == ',' ||
stringo[j - 1] == ';' ||
stringo[j - 1] == '.' ||
stringo[j - 1] == '!' ||
stringo[j - 1] == '?' ||
stringo[j - 1] == '"' ||
stringo[j - 1] == '(' ||
stringo[j - 1] == ')' ||
stringo[j - 1] == '{' ||
stringo[j - 1] == '}' ||
j == 0)
stringo[j] -= 32;
j++;
}
return (stringo);
}

