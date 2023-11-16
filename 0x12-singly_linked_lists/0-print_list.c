#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "main.h"

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
		printf("[%d] (%c)\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (0);
}
