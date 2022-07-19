#include "lists.h"

/**
 * free_listint2 - function that sets the head of a list to NULL.
 * @head: the first node in the list.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;


	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	free(*head);
	*head = NULL;
}
