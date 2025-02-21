#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: the sctring to search
 * @c: the character to search for
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
