#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a list.
 * @head: the first node in te list.
 * @n: number of nodes to add to the list.
 * Return: the address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_first_node;

	if (head == NULL)
		return (NULL);

	new_first_node = malloc(sizeof(listint_t));

	if (new_first_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_first_node->next = NULL;
	else
		new_first_node->next = *head;
	new_first_node->n = n;
	*head = new_first_node;

	return (*head);

}
