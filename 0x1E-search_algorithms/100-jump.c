#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int jump_search(int *array, size_t size, int value)
{
    int i = 0, step = sqrt(size), prev = 0;

	if (array == NULL)
        return -1;
    
    while (array[prev] < value)
	{
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        prev += step;

        if (prev >= (int)size)
            break;
    }
    printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);

    for (i = prev - step; i <= prev && i < (int)size; i++)
	{
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
