#include "lists.h"
/**
 * delete_dnodeint_at_index -deletes node at specific index
 *
 * @head: head list
 * @index: index  new node
 * Return: 1 if it succeess |-1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first;
	dlistint_t *second;
	unsigned int w;

	first = *head;
	if (first != NULL)
		while (first->prev != NULL)
			first = first->prev;
	w = 0;
	while (first != NULL)
	{
		if (w == index)
		{
			if (w == 0)
			{
				*head = first->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				second->next = first->next;

				if (first->next != NULL)
					first->next->prev = second;
			}
			free(first);
			return (1);
		}
		second = first;
		first = first->next;
		w++;
	}
	return (-1);
}
