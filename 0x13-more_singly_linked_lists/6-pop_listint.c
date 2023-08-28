#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked lt
 * @head: ptr to the first element in the linked lt
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is emp
 */
int pop_listint(listint_t **head)
{

listint_t *temporaire;
int nbre;


if (!head || !*head)
	return (0);

nbre = (*head)->n;
temporaire = (*head)->next;
free(*head);
*head = temporaire;

return (nbre);


}



