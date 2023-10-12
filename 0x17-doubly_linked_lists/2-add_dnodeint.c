#include "lists.h"
/**
 * add_dnodeint - adds nouveau node at start
 *
 * @head: head of list
 * @n: value of element
 * Return: address of nouveau element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nouveau;
	dlistint_t *j;

	nouveau = malloc(sizeof(dlistint_t));
	if (nouveau == NULL)
		return (NULL);
	nouveau->n = n;
	nouveau->prev = NULL;
	j = *head;
	if (j != NULL)
	{
		while (j->prev != NULL)
			j = j->prev;
	}
	nouveau->next = j;
	if (j != NULL)
		j->prev = nouveau;
	*head = nouveau;
	return (nouveau);
}
