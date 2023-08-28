#include "lists.h"

/**
 * reverse_listint - reverses a lkd list
 * @head: ptr to first node in the lst
 *
 * Return: ptr to the first node in the new lst
 */
listint_t *reverse_listint(listint_t **head)
{

listint_t *avant = NULL;
listint_t *next = NULL;

while (*head)
{

next = (*head)->next;
(*head)->next = avant;
avant = *head;
*head = next;

}

*head = avant;


return (*head);

}


