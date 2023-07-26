#include "main.h"
/**
 * _strcat - combine 2 strings
 * @dest: input 1
 * @src: input 2
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
char *longofdest = dest;
while (*longofdest != '\0')
{
longofdest++;
}
while (*src != '\0')
{
*longofdest = *src;
longofdest++;
src++;
}
*longofdest = '\0';
return (dest);
}
