#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
int i;
unsigned int total_length = 0;
unsigned int index = 0;
char *concatenated;
if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
char *arg = av[i];
unsigned int arg_length = 0;
while (arg[arg_length] != '\0')
{
arg_length++;
}
total_length += arg_length + 1;
}

concatenated = (char *)malloc(total_length *sizeof(char));
if (concatenated == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
char *arg = av[i];
unsigned int arg_length = 0;
while (arg[arg_length] != '\0')
{
concatenated[index++] = arg[arg_length++];
}
concatenated[index++] = '\n';
}
concatenated[index] = '\0';
return (concatenated);
}


