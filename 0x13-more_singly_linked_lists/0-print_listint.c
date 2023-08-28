#include "lists.h"

/**
 * print_listint - print elements of a linked list
 * @h: linkd list of type listint_t
 *
 * Return: nbr of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nbre = 0;

while (h)
{
	printf("%d\n", h->n);
	nbre++;
	h = h->next;
}

return (nbre);

}

