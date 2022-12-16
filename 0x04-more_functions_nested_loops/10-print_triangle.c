#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (space = 1; space <= (size - i); space++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
