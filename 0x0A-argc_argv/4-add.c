#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - str there are dig
 * @str: array str
 *
 * Return: Always 0
 */
int check_num(char *str)
{

unsigned int counter;

counter = 0;
while (counter < strlen(str))

{
if (!isdigit(str[counter]))
{
return (0);
}

counter++;
}
return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

int counter;
int str_to_int;
int somme = 0;

counter = 1;
while (counter < argc)
{
if (check_num(argv[counter]))

{
str_to_int = atoi(argv[counter]);
somme += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
counter++;
}
printf("%d\n", somme); /*print somme*/
return (0);
}

