#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * add_node_end - add node at end
 * @head: head node
 * @str: strung to adf
 *
 * Return: 0
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *temp;
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
	n->next = NULL;

	if (!(*head))
		*head = n;

	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n;
	}
	return (n);
}
