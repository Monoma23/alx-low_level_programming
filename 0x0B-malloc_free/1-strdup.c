#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 * Return: A pointer to the duplicated str, or NULL if it fails.
 */
char *_strdup(char *str)
{
char *dupli;
int i;

if (str == NULL)
{
return (NULL);
}
unsigned int length = 0;
while (str[length] != '\0')
{
length++;
}

dupli = malloc((length + 1) * sizeof(char));

if (dupli == NULL)
{
return (NULL);
}

for (i = 0; i <= length; i++)
{
dupli[i] = str[i];
}
return (dupli);
}


