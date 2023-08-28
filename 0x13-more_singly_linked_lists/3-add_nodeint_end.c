#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of linked ls
 * @head: ptr to the first element in the list
 * @n: data to insert in the newNode element
 *
 * Return: ptr to the newNode node, or NULL si it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *temporaire = *head;

newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);

newNode->n = n;
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


