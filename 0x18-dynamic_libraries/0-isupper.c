#include "main.h"

/**
 * _isupper - hsow if its upper
 * @c: character will be check
 *
 * Return: 0 | 1
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

