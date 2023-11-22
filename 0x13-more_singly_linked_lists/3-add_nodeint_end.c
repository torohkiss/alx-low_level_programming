#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the 
 * end of a listint_t list.
 * @head: the list
 * @n: the data
 *
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;

	return (temp);
}
