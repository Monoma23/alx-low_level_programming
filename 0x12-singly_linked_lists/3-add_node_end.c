#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds newNode node at the end of lnkd ls
 * @head: double ptr to the list_t list
 * @str: str to put in the newNode node
 *
 * Return: address of the newNode element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;
list_t *temporaire = *head;
unsigned int longueur = 0;

while (str[longueur])
	longueur++;

newNode = malloc(sizeof(list_t));
if (!newNode)
	return (NULL);

newNode->str = strdup(str);
newNode->longueur = longueur;
newNode->next = NULL;

if (*head == NULL)
{
	*head = newNode;
	return (newNode);
}

while (temporaire->next)
temporaire = temporaire->next;

temporaire->next = newNode;

return (newNode);

}

