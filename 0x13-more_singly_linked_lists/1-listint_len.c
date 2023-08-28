#include "lists.h"

/**
 * listint_len - returns the number of elements inlinked lsts
 * @h: linked list of type listint_t
 *
 * Return: nbre of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t nbre = 0;

while (h)
{
nbre++;
h = h->next;
}


return (nbre);

}


