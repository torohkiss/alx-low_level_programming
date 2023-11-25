#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0
 */

int get_endianness(void)
{
	unsigned int x = 0x7343211;

	char *c = (char *)&x;

	if (*c)
		return (1);
	else
		return (0);
}
