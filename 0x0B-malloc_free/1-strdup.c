#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy
 * of the string given as a parameter.
 * @str: the string
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(*s));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < str[i]; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}
