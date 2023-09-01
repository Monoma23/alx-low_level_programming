#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
unsigned int nbrr = 1;
char *bytoda = (char *)&nbrr;

if (*bytoda)
return (1);
else
return (0);

}




