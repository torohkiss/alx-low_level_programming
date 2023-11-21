#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list.
 * @head: the list
 * @n: new data
 *
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->n = n;

	ptr->next = *head;
	*head = ptr;

	return (&head);
}
