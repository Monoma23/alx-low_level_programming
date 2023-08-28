#include "lists.h"

/**
 * insert_nodeint_at_index - inserts newNode node at linked list,
 * in given position
 * @head: ptr to first node in the list
 * @idx: index where the newNode node is added
 * @n: data to insert in the newNode node
 *
 * Return: ptr to newNode or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *newNode;
listint_t *temporaire = *head;

newNode = malloc(sizeof(listint_t));
if (!newNode || !head)
	return (NULL);

newNode->n = n;
newNode->next = NULL;

if (idx == 0)
{
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

for (k = 0; temporaire && k < idx; k++)
{
	if (k == idx - 1)
	{
		newNode->next = temporaire->next;
		temporaire->next = newNode;
		return (newNode);
	}
	else
		temporaire = temporaire->next;
}


return (NULL);

}


