#include <stdio.h>
#include <stdlib.h>
#include "main.h"

size_t print_list(const list_t *h)
{
	if (h == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
		printf("%c", h->str);
		h = h->next;
	}

	return (0);
}
