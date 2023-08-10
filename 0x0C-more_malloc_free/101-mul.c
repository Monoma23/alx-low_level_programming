#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - check if  str contains non-digit char
 * @s: str to evaluat
 *
 * Return: 0 if non-digit is found, 1 ifnot
 */
int is_digit(char *s)
{
int h = 0;

while (s[h])
{
if (s[h] < '0' || s[h] > '9')
return (0);
h++;
}
return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int h = 0;

while (s[h] != '\0')
{
h++;
}
return (h);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *str1, *str2;
int long1, long2, len, h, carry, digit1, digit2, *resultat, a = 0;
str1 = argv[1], str2 = argv[2];
if (argc != 3 || !is_digit(str1) || !is_digit(str2))
errors();
long1 = _strlen(str1);
long2 = _strlen(str2);
len = long1 + long2 + 1;
resultat = malloc(sizeof(int) * len);
if (!resultat)
return (1);
for (h = 0; h <= long1 + long2; h++)
resultat[h] = 0;
for (long1 = long1 - 1; long1 >= 0; long1--)
{
digit1 = str1[long1] - '0';
carry = 0;
for (long2 = _strlen(str2) - 1; long2 >= 0; long2--)
{
digit2 = str2[long2] - '0';
carry += resultat[long1 + long2 + 1] + (digit1 *digit2);
resultat[long1 + long2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
resultat[long1 + long2 + 1] += carry;
}
for (h = 0; h < len - 1; h++)
{
if (resultat[h])
a = 1;
if (a)
_putchar(resultat[h] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(resultat);
return (0);
}

