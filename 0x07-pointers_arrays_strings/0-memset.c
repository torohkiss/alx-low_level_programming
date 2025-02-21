#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the memory area
 * @b: the constant byte
 * @n: first bytes to fill
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return s;
}
