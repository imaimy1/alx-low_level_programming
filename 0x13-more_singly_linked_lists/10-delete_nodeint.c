#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list.
 * @head: pointer 
 * @index: position of the noe
 * Return: 0.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a_node = *head;
	listint_t *n_delete = *head;
	unsigned int idx;
	unsigned int cont = 0;

	/* case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete */
	if (index == 0)
	{
		*head = n_delete->next;
		free(n_delete);
		return (1);
	}

	/* finde a  position to delete */
	idx = index - 1;
	while (a_node && cont != idx)
	{
		cont++;
		a_node = a_node->next;
	}

	/* general case */
	if (cont == idx && a_node)
	{
		n_delete = a_node->next;
		a_node->next = n_delete->next;
		free(n_delete);
		return (1);
	}

	return (-1);
}
