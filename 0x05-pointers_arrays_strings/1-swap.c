#include <stdio.h>

/**
 * swap_int - swap
 * @a: this is one of the pointers
 * @b: this is one of the pointers
 *
 * Description: this swaps the values of ints
 * variable
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
