#include "main.h"
/**
 * _strcmp - compare string val
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[o] - s2[o]
 */
int _strcmp(char *s1, char *s2)
{
	int o;

	o = 0;
	while (s1[o] != '\0' && s2[o] != '\0')
	{
		if (s1[o] != s2[o])
		{
			return (s1[o] - s2[o]);
		}
	o++;
	}
	return (0);
}

