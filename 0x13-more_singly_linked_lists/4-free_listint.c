#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;
	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(ptr);
	}

	head = NULL;
}
