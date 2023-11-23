#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list
 * @head: the list head
 *
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (!head)
		return (0);

	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		sum += ptr->n;
	}

	return (sum);
}
