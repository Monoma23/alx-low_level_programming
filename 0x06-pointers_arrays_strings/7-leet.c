#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: Pointer to the input str
 *
 * Return: A pointer to the modified str.
 */
char *leet(char *str)
{
char *ptr = str;
char map[] = "aAeEoOtTlL";
char leet_replace[] = "4433007711";
while (*ptr != '\0')
{
int i = 0;
while (map[i] != '\0')
{
if (*ptr == map[i])
{
*ptr = leet_replace[i];
break;
}
i++;
}
ptr++;
}
return (str);
}
