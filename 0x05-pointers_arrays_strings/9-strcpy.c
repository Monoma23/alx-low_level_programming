#include "main.h"

/**
 * char *_strcpy -funct copies string pointed to by src
 * @dest: cpy to
 * @src: cpy from
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
int longueur = 0;
int z = 0;

while (*(src + longueur) != '\0')
{
longueur++;
}
for ( ; z < longueur ; z++)
{
dest[z] = src[z];
}
dest[longueur] = '\0';
return (dest);
}

