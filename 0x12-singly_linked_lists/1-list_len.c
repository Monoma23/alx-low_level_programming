#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number elments in a lnkd ls
 * @h: ptr to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t nbr = 0;

while (h)
{
	nbr++;
	h = h->next;
}

	return (nbr);

}

