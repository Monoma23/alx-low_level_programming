#include "main.h"
/**
 * print_alphabet - display _putchar
 *
 * Return: 0 success
 */

void print_alphabet(void)
{
char alphabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char alpha;
int i;
for (i = 0; i < 26; i++)
{

alpha = alphabets[i];
_putchar(alpha);
_putchar('\n');
}
return (0);
}

