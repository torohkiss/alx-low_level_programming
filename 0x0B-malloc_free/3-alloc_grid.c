#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: width
 * @height: heighy
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid_array;

	if (width < 1 || height < 1)
		return (NULL);

	grid_array = malloc(height * sizeof(int *));

	if (grid_array == NULL)
	{
		free(grid_array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid_array[i] = malloc(sizeof(int) * width);
		if (grid_array[i] == NULL)
		{
			while (--i >= 0)
			{
				free(grid_array[i]);
			}
			free(grid_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid_array[i][j] = 0;
	}
	return (grid_array);
}
