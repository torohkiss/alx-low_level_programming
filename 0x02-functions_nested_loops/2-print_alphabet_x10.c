#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		char s;

		s = 'a';
		while (s <= 'z')
		{
			putchar(s);
			s++;
		}
		a++;
		putchar('\n');
	}
}
