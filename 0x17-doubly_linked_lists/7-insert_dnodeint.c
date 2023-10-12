#include "lists.h"
/**
 * insert_dnodeint_at_index - insert nouveau node
 *
 * @h: head list
 * @idx: index -nouveau node
 * @n: value - nouveau node
 * Return: address of the nouveau node | NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nouveau;
	dlistint_t *tete;
	unsigned int w;

	nouveau = NULL;
	if (idx == 0)
		nouveau = add_dnodeint(h, n);
	else
	{
		tete = *h;
		w = 1;
		if (tete != NULL)
			while (tete->prev != NULL)
				tete = tete->prev;
		while (tete != NULL)
		{
			if (w == idx)
			{
				if (tete->next == NULL)
					nouveau = add_dnodeint_end(h, n);
				else
				{
					nouveau = malloc(sizeof(dlistint_t));
					if (nouveau != NULL)
					{
						nouveau->n = n;
						nouveau->next = tete->next;
						nouveau->prev = tete;
						tete->next->prev = nouveau;
						tete->next = nouveau;
					}
				}
				break;
			}
			tete = tete->next;
			w++;
		}
	}
	return (nouveau);
}
