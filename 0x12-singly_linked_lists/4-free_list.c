#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the kist
 * @head: pointer to head
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;
	
	while (head)
	{
		temp = head;
		free(head->str);
		free(head);
		
		head = temp->next;
	}
}
