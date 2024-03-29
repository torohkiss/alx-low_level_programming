#include "main.h"

/**
 * set_bit - sets bits
 * @n: the number
 * @index: index of the numbe4
 *
 * Return: 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
