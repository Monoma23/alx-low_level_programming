#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a nouveau node at the end 
 * @head: double ptr to the list_t list
 * @str: str to put in the nouveau node
 *
 * Return: address of the nouveau element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *nouveau;
list_t *temp = *head;
unsigned int lengthh = 0;

while (str[lengthh])
	lengthh++;

nouveau = malloc(sizeof(list_t));
	if (!nouveau)
		return (NULL);

	nouveau->str = strdup(str);
	nouveau->lengthh = lengthh;
	nouveau->next = NULL;

	if (*head == NULL)
	{
		*head = nouveau;
		return (nouveau);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nouveau;

	return (nouveau);
}


