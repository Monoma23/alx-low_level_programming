#include "main.h"
/**
 * rot13 - Encodes a string using ROT13.
 * @str: Pointer to the input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
char *ptrr = str;
char alphabett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13_alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*ptrr != '\0')
{
int i = 0;
while (alphabett[i] != '\0')
{
if (*ptrr == alphabett[i])
{
*ptrr = rot13_alphabet[i];
break;
}
i++;
}
ptrr++;
}
return (str);
}
