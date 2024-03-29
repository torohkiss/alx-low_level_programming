#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: name to print
 * @f: the function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
