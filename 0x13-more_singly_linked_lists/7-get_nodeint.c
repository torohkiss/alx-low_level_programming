#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list.
 * @head: the hesd node
 * @index: index of the node
 *
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++, head = head->next;
	}
	return (NULL);
}
