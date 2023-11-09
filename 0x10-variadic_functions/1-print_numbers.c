#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string separating numbers
 * @n: number of integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int j;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		printf("%d", j);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
