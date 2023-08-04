#include "main.h"

/**
 * _atoi - convert a string into an int
 *
 * @s: the string to
 *
 * Return: int.
 */

int _atoi(char *s)
{
	int signe = 1, k = 0;
	unsigned int res = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			signe *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		res = (res * 10) + (s[k] - '0');
		k++;
	}
	res *= signe;
	return (res);
}

