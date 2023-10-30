#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of thr array
 * @c: the character
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
