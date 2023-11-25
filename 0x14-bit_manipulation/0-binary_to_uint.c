#include "main.h"

/**
 * _strlen - fi ds string length
 * @str: the string
 *
 * Return: 0
 */

unsigned int _strlen(char const *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _pow - finds power of a number
 * @a: number raosed
 * @b: poeer
 *
 * Return: 0
 */

unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i, power = 1;

	if (b == 0)
		return (1);
	for (i = 0; i < b; i++)
		power *= a;

	return (power);
}

/**
 * binary_to_uint - converts binary
 * @b: pointer tp b
 *
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len, sum, basePwr;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	len = _strlen(b);
	sum = 0;
	for (i = 0, j = len; i < len; i++, j--)
	{
		basePwr = _pow(2, j - 1);
		sum += (((b[i]) - '0') * basePwr);
	}
	return (sum);
}
