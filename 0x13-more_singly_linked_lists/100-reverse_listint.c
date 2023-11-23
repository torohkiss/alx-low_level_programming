#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: the list
 *
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *current;

	temp = NULL;
	current = NULL;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		current->next = temp;
		temp = current;
	}
	*head = current;

	return (*head);
}
