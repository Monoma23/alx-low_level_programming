#include "lists.h"
/**
 * add_dnodeint_end -adding nouveau node at end
 *
 * @head: head list
 * @n: value
 * Return: address of nouveau element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *j;
	dlistint_t *nouveau;

	nouveau = malloc(sizeof(dlistint_t));
	if (nouveau == NULL)
		return (NULL);
	nouveau->n = n;
	nouveau->next = NULL;
	j = *head;
	if (j != NULL)
	{
		while (j->next != NULL)
			j = j->next;
		j->next = nouveau;
	}
	else
	{
		*head = nouveau;
	}
	nouveau->prev = j;
	return (nouveau);
}
