#include "main.h"

/**
 * rev_string - Reverses a char string
 * @s: the argument or the Input string
 * Return: reversed string
 */

void rev_string(char *s)
{
char reversed = s[0];
int longueur = 0;
int j;

while (s[longueur] != '\0')
longueur++;
for (j = 0; j < longueur; j++)
{
longueur--;
reversed = s[j];
s[j] = s[longueur];
s[longueur] = reversed;
}
}

