#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked list.
 * @h: the first node in the list.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
		h = h->next;
	return (counter);
}
