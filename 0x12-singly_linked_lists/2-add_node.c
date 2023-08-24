#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds  nouveau node at beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: nouveau str to add in the node
 *
 * Return: the address of the nouveau e
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *nouveau;
unsigned int len = 0;

while (str[len])
	len++;

nouveau = malloc(sizeof(list_t));
if (!nouveau)
	return (NULL);

nouveau->str = strdup(str);
nouveau->len = len;
nouveau->next = (*head);
(*head) = nouveau;


return (*head);

}


