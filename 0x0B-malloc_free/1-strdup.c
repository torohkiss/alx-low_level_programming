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
	unsigned int j;
	char *s;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	s = malloc(sizeof(char) * (j + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		s[i] = str[i];
	s[j] = '\0';

	return (s);
}
