#include "main.h"

/**
 * _puts -prints string to the std output
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
