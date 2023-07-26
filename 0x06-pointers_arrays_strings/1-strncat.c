#include "main.h"
/**
 * _strncat - concatenate 2 strings
 * using at most n bytes 
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src) {
char *longofdest = dest;
    
while (*longofdest != '\0')
{
longofdest++;
}
    
   
while (*src != '\0' && n > 0)
{
*longofdest = *src;
longofdest++;
src++;
n--;
}
    
*longofdest = '\0';
    
return dest;
}
