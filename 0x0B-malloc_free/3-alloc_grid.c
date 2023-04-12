#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * two dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		a[a] = malloc(sizeof(int) * width);

		if (a[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(a[b]);
			}

			free(a);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			a[c][d] = 0;
		}
	}

	return (a);
}
