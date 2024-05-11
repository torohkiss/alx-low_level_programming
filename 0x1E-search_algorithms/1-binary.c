#include "search_algos.h"

/**
 * print_array - to print the array
 * @array: the array to print
 * @l: left side of array
 * @r: right side of array
 */

void print_array(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");

	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}


/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: 0
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, mid;

	l = 0;
	r = array[size - 1];

	if (!array || size <= 0)
		return (-1);

	while (l < r)
	{
		mid = (l + r) / 2;

		print_array(array, l, r);

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
