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
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
