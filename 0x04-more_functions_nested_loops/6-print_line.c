#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line
 * @n: number of lines to print
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
			_putchar('_');
		_putchar('\n');
	}
}
