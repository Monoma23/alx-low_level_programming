#include "main.h"
#include <stdlib.h>
/**
 * create_array - create arry of size siz and assi char
 * @size: size of aray
 * @c: char to assign
 * Descript: create aray of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *strr;
unsigned int k;

strr = malloc(sizeof(char) * size);
if (size == 0 || strr == NULL)
return (NULL);

for (k = 0; k < size; k++)
strr[k] = c;
return (strr);
}

