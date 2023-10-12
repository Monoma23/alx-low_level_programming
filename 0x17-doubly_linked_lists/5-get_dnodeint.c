#include "lists.h"
/**
 * get_dnodeint_at_index -return the nth node
 * @head: ptr to head
 * @index: index of the node to look for
 * Return: nth node || null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int taille;
	dlistint_t *temporaire;

	taille = 0;
	if (head == NULL)
	return (NULL);
	temporaire = head;
	while (temporaire)
	{
	if (index == taille)
	return (temporaire);
	taille++;
	temporaire = temporaire->next;
	}
	return (NULL);
}
