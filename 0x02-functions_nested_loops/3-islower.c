#include "main.h"

/**
 * _islower - verify if character is lowercase or not
 *@c: le caractère qu'on va etudié
 * Return: 1 si charactere is lowercase, 0 if not.
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

