#include "lists.h"

/**
 * list_len - a function that returns the number of elemnts in
 * a linked list.
 * @h: the first elemnt in the list (head)
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{

		i++;
		h = h->next;
	}
	return (i);

}
