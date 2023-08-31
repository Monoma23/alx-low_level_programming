#include "main.h"

/**
 * binary_to_uint - converts a binary nbr to unint
 * @b: str containing the binary nbr
 *
 * Return: the converted nbr
 */
unsigned int binary_to_uint(const char *b)
{

int k;
unsigned int decimalv = 0;

	if (!b)
		return (0);

for (k = 0; b[k]; k++)
{
	if (b[k] < '0' || b[k] > '1')
		return (0);
	decimalv = 2 * decimalv + (b[k] - '0');
}


return (decimalv);

}


