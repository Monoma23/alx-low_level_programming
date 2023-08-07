#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the nbr of words in a str
 * @s: string to evaluat
 *
 * Return: number words
 */
int count_word(char *s)
{
	int hiro, bo, wiwi;

	hiro = 0;
	wiwi = 0;

	for (bo = 0; s[bo] != '\0'; bo++)
	{
		if (s[bo] == ' ')
			hiro = 0;
		else if (hiro == 0)
		{
			hiro = 1;
			wiwi++;
		}
	}
	return (wiwi);
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
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, bo = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (bo)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (bo + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - bo;
				k++;
				bo = 0;
			}
		}
		else if (bo++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}


