#include "main.h"

/**
 * get_bit - returns value of a bit at indx in a deci nbr
 * @n: num to search
 * @index: index of bit
 *
 * Return: value the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{

int bitval;

if (index > 63)
	return (-1);

bitval = (n >> index) & 1;


return (bitval);


}



