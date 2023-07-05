#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a  list.
 * @head: a pointer.
 * Return: 0.
 **/

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int s = 0;

	while (node)
	{
		s += node->n;
		node = node->next;
	}

	return (s);
}
