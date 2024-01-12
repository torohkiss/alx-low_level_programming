#include "lists.h"

/**
 * print_dlistint - prints elements of a linked list
 * @h: the head node
 *
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}

	return (count);
}
