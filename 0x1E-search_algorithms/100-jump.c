#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0, step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (b < size && array[b] < value)
	{
		a = b;
		b += step;
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	for (i = a; i < b; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
