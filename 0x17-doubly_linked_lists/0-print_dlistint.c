#include "lists.h"

/**
 * print_dlistint - print all the elements
 *
 * @h: head of list
 * Return: nbr of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int compteur;

	compteur = 0;

	if (h == NULL)
		return (compteur);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		compteur++;
		h = h->next;
	}
	return (compteur);
}
