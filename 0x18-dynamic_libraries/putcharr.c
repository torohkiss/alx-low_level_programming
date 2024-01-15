#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @character: the parameter that will be printed out
 * Return: 0
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
