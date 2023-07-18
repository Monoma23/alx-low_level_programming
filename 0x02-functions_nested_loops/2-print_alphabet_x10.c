#include "main.h"
/**
 * print_alphabet_x10 - display alphabet 10 times
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
char alphabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char alpha;
int j;
for (j = 0; j <= 9; j++)
{
int i;
for (i = 0; i < 26; i++)
{

alpha = alphabets[i];
_putchar(alpha);

}
_putchar('\n');
}

}

