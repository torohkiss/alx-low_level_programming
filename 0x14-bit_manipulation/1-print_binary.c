#include "main.h"

/**
 * print_binary - prints binary number
 * @n: the numver
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1, a;

	if (n == 0)
		_putchar('0');

	while (i <= n)
	{
		i *= 2;
	}

	i >>= 1;

	while (n > 0)
	{
		if (n > i)
		{
			_putchar('1');
			n -= i;
			i >>= 1;
		}
		else if (n == i)
		{
			_putchar('1');
			a = (i >> 1);
			if (a > 0)
			{
				for (i = a; i > 0; i >>= 1)
					_putchar('0');
			}
			break;
		}
		else
		{
			_putchar('0');
			i >>= 1;
		}

	}
}
