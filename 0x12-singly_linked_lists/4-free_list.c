#include <stdlib.h>
#include "lists.h"

/**
 * free_list -frees a likd lst
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{

list_t *temporaire;

while (head)
{
	temporaire = head->next;
	free(head->str);
	free(head);
	head = temporaire;
}

}


