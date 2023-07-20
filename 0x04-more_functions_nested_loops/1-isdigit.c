#include "main.h"

/**
 * _isdigit - verify that numbers go from 0 - 9
 * @c: param that gonna be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
if (c <= '9' && c >= '0')
return (1);
else
return (0);
}


