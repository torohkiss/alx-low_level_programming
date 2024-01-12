#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: hesd node
 * @n: the data
 *
 * Return: 0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (last->next)
	{
		last = last->next;
	}

	last->next = new;
	new->prev = last;

	return (new);
}
