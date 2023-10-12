#include "lists.h"
/**
 * sum_dlistint - return the sommation of data
 *
 * @head: head list
 * Return: sommation of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sommation;

	sommation = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sommation += head->n;
			head = head->next;
		}
	}
	return (sommation);
}
