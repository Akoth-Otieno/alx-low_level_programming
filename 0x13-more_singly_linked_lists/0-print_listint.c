#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list.
 * @h: the first element in the list/pointer to the list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
