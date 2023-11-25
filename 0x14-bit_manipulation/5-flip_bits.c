#include "main.h"

/**
 * flip_bits - flips bits
 * @n: arg one
 * @m: arg two
 *
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;

	for (i = 63; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			num++
	}

	return (num);
}
