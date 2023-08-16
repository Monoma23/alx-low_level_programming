#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: num of args
 * @argv: arry of args
 *
 * Return:0 (Success)
 */
int main(int argc, char *argv[])
{
int bytes, h;
char *tab;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

tab = (char *)main;

for (h = 0; h < bytes; h++)
{
if (h == bytes - 1)
{
printf("%02hhx\n", tab[h]);
break;
}
printf("%02hhx ", tab[h]);
}
return (0);
}

