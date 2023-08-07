#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - dupli to new memry spce location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *dupli;
	int k, h = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	dupli = malloc(sizeof(char) * (k + 1));

	if (dupli == NULL)
		return (NULL);

	for (h = 0; str[h]; h++)
		dupli[h] = str[h];

	return (dupli);
}

