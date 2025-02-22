#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: The string to search in
 * @needle: the substring to search for
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				j++;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
			i++;
		}
	}
	return (NULL);
}
