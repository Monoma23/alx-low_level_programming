#include "main.h"

/**
 * flip_bits - counts nbr of bits to change
 * to get from a number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int h, contour = 0;
unsigned long int curre;
unsigned long int exclus = n ^ m;

for (h = 63; h >= 0; h--)
{
	curre = exclus >> h;
	if (curre & 1)
		contour++;

}

return (contour);

}






i
