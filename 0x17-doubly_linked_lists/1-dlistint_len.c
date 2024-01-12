#include "lists.h"

/**
 * dlistint_len - returns the number of 
 * elements in a linked list.
 * @h: head node
 *
 * Return: 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t l;

	l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}

	return (l);
}
