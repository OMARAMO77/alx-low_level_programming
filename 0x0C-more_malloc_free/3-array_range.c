#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *new_arr, c, i = 0;

	if (min > max)
		return (NULL);

	new_arr = malloc(sizeof(int) * (max - min + 1));

	if (new_arr == NULL)
		return (NULL);

	for (c = min; c <= max; c++)
	{
		new_arr[i] = c;
		i++;
	}

	return (new_arr);
}
