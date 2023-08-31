#include "main.h"

int get_endianness(void)
{
unsigned int nbrr = 1;
char *bytoda = (char *)&nbrr;

if (*bytoda)
return (1);
else
return (0);

}

