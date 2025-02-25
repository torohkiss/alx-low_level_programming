#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: the destinaion to copy to
 * @src: the source to copy from
 * @n: the bytes limit to copy
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
