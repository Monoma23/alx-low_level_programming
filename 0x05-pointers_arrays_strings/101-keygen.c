#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program generating random
 * passwords for: program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
int pswrd[100];
int j, somme, m;

somme = 0;	

srand(time(NULL));

for (j = 0; j < 100; j++)
{
pswrd[j] = rand() % 78;
somme += (pswrd[j] + '0');
putchar(pswrd[j] + '0');
if ((2772 - somme) - '0' < 78)
{
m = 2772 - somme - '0';
somme += m;
putchar(m + '0');
break;
}
}

return (0);
}

