#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a str
 * @s: str evaluated
 *
 * Return: length of the str
 */
int _strlen(char *s)
{
int j;

j = 0;

while (s[j] != '\0')
{
j++;
}

return (j);
}

/**
 * *_strcpy - cp the str pointed to by src
 * includ  (\0)
 * to the buffer pointd to by dest
 * @dest: pointer to the buffer in which we cp the str
 * @src: str to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int longueur, j;

longueur = 0;

while (src[longueur] != '\0')
{
longueur++;
}

for (j = 0; j < longueur; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';

return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int long1, long2;

long1 = _strlen(name);
long2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (long1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (long2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}

