#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: lowesnt num
 * @max: max number
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
		array[i] = j;

	return (array);
}
