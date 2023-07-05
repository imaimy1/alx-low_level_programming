#include "lists.h"

/**
 * free_listint2 - frees a  list.
 * the function sets the head to NULL.
 * @head: pointer.
 **/

void free_listint2(listint_t **head)
{
	listint_t *a_node;
	listint_t *n_node;

	if (!head)
		return;

	a_node = *head;
	n_node = (*head)->next;
	while (n_node)
	{
		free(a_node);
		a_node = n_node;
		n_node = n_node->next;
	}
	free(a_node);
	*head = NULL;
}
