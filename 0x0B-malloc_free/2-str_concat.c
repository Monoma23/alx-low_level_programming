#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A ptr to the concatenated str or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
int k;
int len_s1 = 0;
int len_s2 = 0;
char *concatenated;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[len_s1] != '\0')
{
len_s1++;
}
while (s2[len_s2] != '\0')
{
len_s2++;
}
concatenated = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
if (concatenated == NULL)
{
return (NULL);
}

for (k = 0; k < len_s1; k++)
{
concatenated[k] = s1[k];
}
for (int k = 0; k <= len_s2; k++)
{
concatenated[len_s1 + k] = s2[k];
}
return (concatenated);
}

