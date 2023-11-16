#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node to begining of list
 * @head: pounter to first node
 * @str: string to add
 *
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n = NULL;
	size_t count = 0;

	n = malloc(sizeof(list_t));

	if (!n)
	{
		free(n);
		return (NULL);
	}

	for (count = 0; str[count]; count++)
		;

	n->str = strdup(str) ? strdup(str) : (NULL);
	n->len = count;
	n->next = *head;

	*head = n;

	return (n);
}
