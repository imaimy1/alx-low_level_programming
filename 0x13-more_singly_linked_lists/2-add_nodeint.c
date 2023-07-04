#include "lists.h"

/**
 * add_nodeint - adds a new node.
 * @head: a pointer.
 * @n: int.
 * Return: address.
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);

	l->n = n;
	l->next = *head;
	*head = l;

	return (l);
}
