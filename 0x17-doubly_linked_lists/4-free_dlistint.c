#include "lists.h"
/**
 * free_dlistint- libere la dlistint_t list
 * @head: ptr to head
 * Return:Nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;
	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
