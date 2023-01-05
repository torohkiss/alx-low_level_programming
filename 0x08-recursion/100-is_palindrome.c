#include "main.h"

/**
 * _strlen_recursion - returns lenght of a string.
 * @s: pointer to string.
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * helperFunction - check if palindrome.
 * @s: pointer to string
 * @fi: first index.
 * @li: lastIndex.
 *
 * Return: 0
 */

int helperFunction(char *s, int fi, int li)
{
	if (fi < li && s[fi] == s[li])
	{
		return (helperFunction(s, fi + 1, li - 1));
	}
	if (s[fi] != s[li])
		return (0);
	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string to return
 *
 * Return: 0
 */

int is_palindrome(char *s)
{
	int fi, li;

	fi = 0;
	li = _strlen_recursion(s) - 1;

	if (!*s)
		return (1);
	return (helperFunction(s, fi, li));
}
