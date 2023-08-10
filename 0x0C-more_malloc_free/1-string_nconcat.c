#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenate n bytes of a str to another str
 * @s1: str appendd to
 * @s2: str  concatenate from
 * @n: nbr of byte from s2 to concatenate to s1
 *
 * Return: ptr to the resulting str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *conca;

unsigned int i = 0, h = 0, long1 = 0, long2 = 0;

while (s1 && s1[long1])
long1++;
while (s2 && s2[long2])
long2++;

if (n < long2)
conca = malloc(sizeof(char) * (long1 + n + 1));
else
conca = malloc(sizeof(char) * (long1 + long2 + 1));

if (!conca)
return (NULL);

while (i < long1)
{
conca[i] = s1[i];
i++;
}

while (n < long2 && i < (long1 + n))
conca[i++] = s2[h++];

while (n >= long2 && i < (long1 + long2))
conca[i++] = s2[h++];

conca[i] = '\0';

return (conca);

}

