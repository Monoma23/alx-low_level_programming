#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints rslt of smple operations
 * @argc: The number of arguments supplied to the program
 * @argv: An array of ptrs to the args
 *
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int nbr1, nbr2;
char *opp;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

nbr1 = atoi(argv[1]);
opp = argv[2];
nbr2 = atoi(argv[3]);

if (get_op_func(opp) == NULL || opp[1] != '\0')
{

printf("Error\n");
exit(99);

}

if ((*opp == '/' && nbr2 == 0) ||
(*opp == '%' && nbr2 == 0))
{

printf("Error\n");
exit(100);

}

printf("%d\n", get_op_func(opp)(nbr1, nbr2));

return (0);
}

