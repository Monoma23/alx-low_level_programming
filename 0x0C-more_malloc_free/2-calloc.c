#include <stdlib.h>
#include "main.h"

/**
 * *_memsett - fills memory with a constant byte
 * @s: memory to be filled
 * @b: char to cp
 * @n: number of times to cp b
 *
 * Return: pointeur to the memory area s
 */
char *_memsett(char *s, char b, unsigned int n)
{
unsigned int j;

for (j = 0; j < n; j++)
{
s[j] = b;
}

return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointeur;

if (nmemb == 0 || size == 0)
return (NULL);

pointeur = malloc(size * nmemb);

if (pointeur == NULL)
return (NULL);
_memsett(pointeur, 0, nmemb * size);

return (pointeur);
}

