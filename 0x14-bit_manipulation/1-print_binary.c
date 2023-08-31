#include "main.h"

/**
 * print_binary - prints binary equival of a deci nbr
 * @n: nbr to print in binary
 */
void print_binary(unsigned long int n)
{

int k, contour = 0;
unsigned long int current;

for (k = 63; k >= 0; k--)
{
	current = n >> k;

	if (current & 1)
	{
		_putchar('1');
		contour++;
	}
	else if (contour)
		_putchar('0');
}
if (!contour)
	_putchar('0');

}


