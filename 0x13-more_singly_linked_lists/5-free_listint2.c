#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: ptr to the listint_t list to get freed
 */
void free_listint2(listint_t **head)
{
listint_t *temporaire;

if (head == NULL)
	return;

while (*head)
{
	temporaire = (*head)->next;
	free(*head);
	*head = temporaire;
}


*head = NULL;

}


