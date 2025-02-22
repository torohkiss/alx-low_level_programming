#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: the target string to search for
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
