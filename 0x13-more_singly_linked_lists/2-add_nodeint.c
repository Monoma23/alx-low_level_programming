#include "lists.h"

/**
 * add_nodeint - adds a newNode node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that newNode node
 *
 * Return: ptr to newNode node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

newNode = malloc(sizeof(listint_t));
if (!newNode)
	return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;


return (newNode);

}



