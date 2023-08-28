#include "lists.h"

/**
 * get_nodeint_at_index - returns node at an index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: ptr to the node we're looking for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k = 0;
listint_t *temporaire = head;

while (temporaire && k < index)
{
	temporaire = temporaire->next;
	k++;
}

	
	return (temporaire ? temporaire : NULL);

}



