#include "main.h"

/**
 * _atoi - convert string integer
 * @s: the string to be converted
 *
 * Return: the int convertedd
 */
int _atoi(char *s)
{
int counter, j, n, longueur, p, digt;

counter = 0;
j = 0;
n = 0;
longueur = 0;
p = 0;
digt = 0;

while (s[longueur] != '\0')
longueur++;

while (counter < longueur && p == 0)
{
if (s[counter] == '-')
++j;

if (s[counter] >= '0' && s[counter] <= '9')
{
digt = s[counter] - '0';
if (j % 2)
digt = -digt;
n = n * 10 + digt;
p = 1;
if (s[counter + 1] < '0' || s[counter + 1] > '9')
break;
p = 0;
}
counter++;
}

if (p == 0)
return (0);

return (n);
}

