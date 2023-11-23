#include "lists.h"

/**
 * pop_listint - deletes the head node of 
 * a listint_t linked list
 * @head: the head node
 *
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!(*head))
		return (0);

	temp = *head;
	i = temp->n;
	temp = temp->next;

	free(*head);

	*head = temp;

	return (i);
}
