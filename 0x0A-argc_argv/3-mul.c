#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argyument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int mul;

	mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			mul *= atoi(argv[count]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
