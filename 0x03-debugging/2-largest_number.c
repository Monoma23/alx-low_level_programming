#include "main.h"
/**
* largest_number - give largest numberr
* @a: param 1
* @b: param 2
* @c: param 3
* Return: the greater
*/
int largest_number(int a, int b, int c)
{
int largest;
if (a > c && a > b)
{
largest = a;
}
else if (c > a && a > b)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}

