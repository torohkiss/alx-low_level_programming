#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Finds the length of string
 * @str: thr dtring
 *
 * Return: 0
 */

int _strlen(char *str)
{
	int i;

	for(i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned long int a, b, res;

	int len_a, len_b;
	
	len_a = _strlen(argv[1]);
	len_b = _strlen(argv[2]);

	for (i = 0; i < )

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = mul(a, b);
	printf("%d", res);
}
