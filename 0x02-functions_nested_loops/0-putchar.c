#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char *s;

	s = "_putchar";
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
