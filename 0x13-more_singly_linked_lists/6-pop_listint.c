#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: a  pointer.
 * Return: 0.
 **/

int pop_listint(listint_t **head)
{
	int d;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	d = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (d);
}
