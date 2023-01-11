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

	if (size == NULL)
		return NULL;

	s = malloc(size);
	if (s == NULL)
		return (1);
	else
		s[0] = c;
}
