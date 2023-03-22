#include "function_pointers.h"

/**
 * array_iterator - iterate
 * @array: array of integers
 * @size: size of array
 * @action: action to perform on array
 *
 * Description: print string based on the function passed
 * as argument.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
