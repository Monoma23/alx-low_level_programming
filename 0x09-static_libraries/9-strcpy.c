#include "main.h"

/**
 * char *_strcpy - a function that cp the str point to by src
 * @dest: copy to
 * @src: copy frm
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0;
	int y = 0;

	while (*(src + h) != '\0')
	{
		h++;
	}
	for ( ; y < h ; y++)
	{
		dest[y] = src[y];
	}
	dest[h] = '\0';
	return (dest);
}

