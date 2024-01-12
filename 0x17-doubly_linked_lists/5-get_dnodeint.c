#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: the head node
 * @index: index od the num
 *
 * Return: 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i += 1;
	}

	return (NULL);
}
