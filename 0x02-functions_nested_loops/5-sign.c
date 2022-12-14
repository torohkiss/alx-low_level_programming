#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints sign
 * @n: number to print sign for
 *
 * Return: Always 0
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	return (result);
}
