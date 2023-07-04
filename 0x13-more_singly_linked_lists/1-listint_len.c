#include "lists.h"

/**
 * listint_len - returns the number of elements in  a list.
 * @h: a pointer.
 * Return: 0.
 **/
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t c = 0;

	while (node)
	{
		c++;
		node = node->next;
	}

	return (c);
}
