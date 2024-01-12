#include "lists.h"

/**
 * add_dnodeint - adds a new node at the
 * the beginning of a dlistint_t list.
 * @head: the node
 * @n: the data
 *
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (!(*head))
	{
		*head = temp;
		temp->next = NULL;
		temp->prev = NULL;
		return (temp);
	}

	temp->next = *head;
	temp->prev = NULL;
	(*head)->prev = temp;
	*head = temp;
	return (temp);
}
