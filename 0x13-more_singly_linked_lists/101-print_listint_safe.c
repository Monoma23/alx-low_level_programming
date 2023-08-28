#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts nbr of unque nde
 * in a looped listint_t linked list
 * @head: ptr to the head of the listint_t to check
 *
 * Return: If the list isn't looped 0
 * Otherwise - the nbr of unique ndes in the lst
 */
size_t looped_listint_len(const listint_t *head)
{

const listint_t *var1, *var2;
size_t ndes = 1;

if (head == NULL || head->next == NULL)
	return (0);

var1 = head->next;
var2 = (head->next)->next;

while (var2)
{
	if (var1 == var2)
	{
		var1 = head;
		while (var1 != var2)
		{
			ndes++;
			var1 = var1->next;
			var2 = var2->next;
		}

		var1 = var1->next;
		while (var1 != var2)
		{
			ndes++;
			var1 = var1->next;
		}

		return (ndes);
	}

	var1 = var1->next;
	var2 = (var2->next)->next;

}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safly
 * @head: A pointer to the head of the listint_t lst
 *
 * Return: The number of ndes in lst
 */
size_t print_listint_safe(const listint_t *head)
{
size_t ndes, i = 0;

ndes = looped_listint_len(head);

if (ndes == 0)
{
	for (; head != NULL; ndes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
}

else
{
	for (i = 0; i < ndes; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);

}


return (ndes);

}




