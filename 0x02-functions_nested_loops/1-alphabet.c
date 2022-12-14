#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char s;

	s = 'a';
	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
}
