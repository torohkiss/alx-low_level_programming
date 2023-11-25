#include "main.h"

/**
 * get_bit - fijds a bit and retuens it
 * @n: the nunber
 * @index: index of numbwr
 *
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
