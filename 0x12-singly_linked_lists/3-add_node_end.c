#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list.
 * @head: the first elemnt in the list.
 * @str: points to the address of a string to be printed.
 * Return: an adress to the new lement or NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	struct list_s *new = NULL;
	struct list_s *temp = NULL;
	int i;

	new = (struct list_s *)malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);

}
