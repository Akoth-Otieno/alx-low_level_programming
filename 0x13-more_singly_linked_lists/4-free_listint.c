#include "lists.h"

/**
 * free_listint - function that frees the memory held by a list.
 * @head: the first node in the list.
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
	free(head);
}
