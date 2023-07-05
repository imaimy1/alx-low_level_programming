#include "lists.h"

/**
 * insert_nodeint_at_index - inserts the new node at a given position.
 * @head: pointer.
 * @idx: node's position.
 * @n: the new node's data.
 * Return: 0.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a_node = *head;
	listint_t *n_node;
	unsigned int ind;
	unsigned int cont = 0;

	/* create a  node */
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;

	/* border case for insert */
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (*head);
	}

	/* find a position to insert */
	ind = idx - 1;
	while (a_node && cont != ind)
	{
		cont++;
		a_node = a_node->next;
	}

	/* general case */
	if (cont == ind && a_node)
	{
		n_node->next = a_node->next;
		a_node->next = n_node;
		return (n_node);
	}

	free(n_node);
	return (NULL);
}
