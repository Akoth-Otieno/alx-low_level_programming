#include "lists.h"

/**
 * pop_listint - function that delete the head of a node of a linked
 * list and returns the head nodes data.
 * @head: the first node in the list.
 * Return: data in the head node or 0 (if list is empty).
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);
	return (n);
}
