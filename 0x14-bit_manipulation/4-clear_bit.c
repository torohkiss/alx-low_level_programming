#include "main.h"

/**
 * clear_bit - clears bits
 * @n: the bit
 * @index: bit index
 *
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
