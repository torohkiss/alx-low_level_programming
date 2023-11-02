#include "main.h"

/**
 * _realloc - realloc func
 * @ptr: the pointer
 * @old_size: prev size
 * @new_size: new size
 *
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	char *newPtr;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(new_size * sizeof(char));
	if (newPtr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			newPtr[i] = ((char *)ptr)[i];
		free(ptr);
		return (newPtr);
	}
	else
	{
		for (j = 0; j < new_size; j++)
			newPtr[j] = ((char *)ptr)[j];
		free(ptr);
		return (newPtr);
	}
}
