#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate mry with malloc
 * @b: number of bytes
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *pointeur;

pointeur = malloc(b);

if (pointeur == NULL)
exit(98);

return (pointeur);

}

