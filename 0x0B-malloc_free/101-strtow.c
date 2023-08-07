#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper funct to count the nbr of words in str
 * @s: string to evaluat
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int dalida, j, z;

dalida = 0;
z = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == ' ')
dalida = 0;
else if (dalida == 0)
{
dalida = 1;
z++;
}
}

return (z);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **batrad, *tmp;
	int i, k = 0, long = 0, words, j = 0, start, end;

while (*(str + long))
long++;
words = count_word(str);
	if (words == 0)
		return (NULL);
	batrad = (char **) malloc(sizeof(char *) * (words + 1));
	if (batrad == NULL)
		return (NULL);
	for (i = 0; i <= long; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				batrad[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	batrad[k] = NULL;
	return (batrad);
}


