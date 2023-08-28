#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in a linked list certain index
 * @head: ptr to first element in the list
 * @index: index of node to delete
 *
 * Return: 1 (Success) or -1 ifnot
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temporaire = *head;
listint_t *actual = NULL;
unsigned int k = 0;

if (*head == NULL)
	return (-1);

if (index == 0)
{
	*head = (*head)->next;
	free(temporaire);
	return (1);
}


while (k < index - 1)
{
	if (!temporaire || !(temporaire->next))
		return (-1);
	temporaire = temporaire->next;
	k++;
}


actual = temporaire->next;
temporaire->next = actual->next;
free(actual);

return (1);

}


