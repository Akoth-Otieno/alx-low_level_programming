#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at a
 * specified position.
 * @head: head of linked list
 * @index: index to delete
 * Return: Always 1 (Success), or -1(FAIL)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *tmp_node;

	if (head == NULL || (*head) == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(current_node);
		return (1);
	}

	while (index != 1)
	{
		if (current_node->next == NULL)
			return (-1);

		current_node = current_node->next;
		--index;
	}
	tmp_node = current_node->next;
	if (current_node->next->next)
		current_node->next = current_node->next->next;
	else
		current_node->next = NULL;
	free(tmp_node);

	return (1);
}
