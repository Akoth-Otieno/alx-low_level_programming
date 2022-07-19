#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: the first node in the list.
 * @index: the index of the node.
 * Return: the index of the node, or NULL (if node does not exist).
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index ; count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
