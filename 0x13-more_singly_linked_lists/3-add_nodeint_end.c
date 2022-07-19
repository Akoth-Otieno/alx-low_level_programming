#include "lists.h"

/**
 * add_nodeint_end -function that adds a new node at the end of a list.
 * @head: the first node in the list.
 * @n: number of nodes to add.
 * Return: the address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *node_to_add;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	node_to_add = malloc(sizeof(listint_t));
	if (node_to_add == NULL)
	{
		free(node_to_add);
		return (NULL);
	}
	node_to_add->n = n;
	node_to_add->next = NULL;

	if (current)
		current->next = node_to_add;
	else
		*head = node_to_add;
	return (node_to_add);
}
