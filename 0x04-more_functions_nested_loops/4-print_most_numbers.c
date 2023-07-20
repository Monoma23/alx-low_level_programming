#include "main.h"

/**
* print_most_numbers -display bumbers sauf 2&4
*
* return: void
*/

void print_most_numbers(void)
{
char k;

for (k = '0'; k <= '9'; k++)
{
if ((k != '2') && (k != '4'))
_putchar(k);
}
_putchar('\n');
}

