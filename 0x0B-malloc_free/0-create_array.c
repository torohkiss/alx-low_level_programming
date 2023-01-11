#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, initializes it with a char.
 * @size: size to init
 * @c: the char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == NULL)
		return NULL;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
