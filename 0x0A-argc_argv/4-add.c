#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] != '1' && *argv[i] != '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		for (i = 1; i < argc; i++)
			sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	if (argc == 1)
		printf("0\n");

	return (0);
}
