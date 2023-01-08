#include <stdio.h>
#include "main.h"

/**
 * _islower - check for alphabets
 * @c: alphabet to check
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
