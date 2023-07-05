#include "lists.h"

/**
 * free_listint - frees a  list.
 * @head: pointe.
 **/

void free_listint(listint_t *head)
{
	listint_t *a_node;
	listint_t *n_node;

	if (head)
	{
		a_node = head;
		n_node = head->next;
		while (n_node)
		{
			free(a_node);
			a_node = n_node;
			n_node = n_node->next;
		}
		free(a_node);
	}
}
