#include "lists.h"

/**
 * dlistint_len -number of elements in  double linkd list
 * @h: head of list
 * Return:  nbr of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int compteur;

	compteur = 0;

	if (h == NULL)
		return (compteur);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		compteur++;
		h = h->next;
	}
	return (compteur);
}
