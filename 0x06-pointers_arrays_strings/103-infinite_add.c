#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as st
 * @n1: Pointer to the first number as a str
 * @n2: Pointer to the second number as a str
 * @r: Pointer to the buffer to store the res.
 * @size_r: Size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int lengh1 = strlengh(n1);
int lengh2 = strlengh(n2);

int carry = 0;
int i = lengh1 - 1;
int j = lengh2 - 1;
int q = 0;

while (i >= 0 || j >= 0 || carry)
{
int sum = carry;

if (i >= 0)
sum += n1[i--] - '0';

if (j >= 0)
sum += n2[j--] - '0';

carry = sum / 10;
if (q >= size_r)
return (0);

r[q++] = (sum % 10) + '0';
}
for (int start = 0, end = q - 1; start < end; start++, end--)
{
char temp = r[start];
r[start] = r[end];
r[end] = temp;
}

r[q] = '\0';
return (r);
}
