#include <stdio.h>
#include "lists.h"


/**
 * print_list - prints all elemnts of a linkd ls
 * @h: ptr to list_t list to prt
 *
 * Return: num of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t y = 0;

while (h)
{

	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	y++;

}


	return (y);
}

