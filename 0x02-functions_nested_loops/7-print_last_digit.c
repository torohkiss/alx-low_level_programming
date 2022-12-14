#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: digit to print last digit
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int last;

	if (n >= 0)
		last = n % 10;
	else
		last = (n % 10) * -1;
	return (last);
}
