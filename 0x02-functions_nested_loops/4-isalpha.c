#include "main.h"

/**
 * _isalpha - verify if it is an alhabe character
 * @c: the character w'll study
 * Return: display 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	return ((c <= 'Z' && c >= 'A') || (c >= 'a' && c <= 'z'));
}

