#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  returns the number of elements in
 * a linked list
 * @h: the list
 *
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	struct list_s *ptr;

	if (h == NULL)
		printf("[0] (nil)\n");

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
