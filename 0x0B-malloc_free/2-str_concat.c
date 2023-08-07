#include "main.h"
#include <stdlib.h>
/**
 * str_concat -get ends of inpt and add together
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *concactained;
int j, inital;
if (s1 == NULL)
s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = inital = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[inital] != '\0')
		inital++;
	concactained = malloc(sizeof(char) * (j + inital + 1));

	if (concactained == NULL)
		return (NULL);
	j = inital = 0;
	while (s1[j] != '\0')
	{
		concactained[j] = s1[j];
		j++;
	}

	while (s2[inital] != '\0')
	{
		concactained[j] = s2[inital];
		j++, inital++;
	}
	concactained[j] = '\0';
	return (concactained);
}
