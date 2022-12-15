#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line
 * @n: number of lines to print
 *
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		a = 0;
		while (a < n)
		{
			_putchar('-');
			a++;
		}
		_putchar('\n');
	}
}
