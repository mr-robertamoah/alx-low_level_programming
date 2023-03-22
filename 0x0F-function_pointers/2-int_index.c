#include "function_pointers.h"

/**
 * int_index - indexing
 * @array: array of integers
 * @size: length of array
 * @cmp: function pointer
 *
 * Description: find and return the first index of integer
 * which produces a non zero from @cmp
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
