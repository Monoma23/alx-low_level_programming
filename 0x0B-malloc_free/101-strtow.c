#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 * Return: The number of words.
 */
int count_words(char *str)
{
int count = 0;
int i = 0;

while (str[i] != '\0')
{
while (str[i] == ' ')
{
i++;
}
if (str[i] != '\0')
{
count++;
while (str[i] != ' ' && str[i] != '\0')
{
i++;
}
}
}

return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
int i;
if (str == NULL || *str == '\0')
{
return (NULL);
}

int num_words = count_words(str);
if (num_words == 0)
{
return (NULL);
}

char **words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

int word_index = 0;
char *token = strtok(str, " ");
while (token != NULL)
{
words[word_index] = strdup(token);
if (words[word_index] == NULL)
{
for (i = 0; i < word_index; i++)
{
free(words[i]);
}
free(words);
return (NULL);
}
word_index++;
token = strtok(NULL, " ");
}
words[word_index] = NULL;

return (words);
}

