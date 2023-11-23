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
	listint_t *temp = *head;

	if (!(*head))
		return (0);
	
	head = head->next;
	free(temp);
	temp = NULL;
	return (head->n);
}
