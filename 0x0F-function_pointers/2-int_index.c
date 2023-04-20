#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to array
 * @size: size of the array
 * @cmp: function to compare the elements throw array
 *
 * Return: The index of the first element for whitch the cmp function
 * does not return 0; -1 if no elements matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
