#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: the array to search
 * @size: sizeo of  tye array
 * @value: value to search for
 *
 * Return: 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			return (i);
			break;
		}
	}
	return (-1);
}
