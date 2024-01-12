#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * @head: hewd node
 *
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
