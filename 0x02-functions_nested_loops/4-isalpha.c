#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: letter to check
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
