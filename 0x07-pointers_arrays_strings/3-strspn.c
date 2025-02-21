#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the string to searxh
 * @accept: the string to search with
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found;

	i = 0;
	while(s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
		{
			return (i);
		}
		i++;
	}
	return (i);
}
