#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds newNode node at the beginning of Lnkd Lis
 * @head: double ptr to the list_t list
 * @str: newNode str to add in node
 *
 * Return: address of the newNode elmnt or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
unsigned int longueur = 0;

while (str[longueur])
	longueur++;

newNode = malloc(sizeof(list_t));
if (!newNode)
	return (NULL);

newNode->str = strdup(str);
newNode->longueur = longueur;
newNode->next = (*head);
(*head) = newNode;


return (*head);
}

