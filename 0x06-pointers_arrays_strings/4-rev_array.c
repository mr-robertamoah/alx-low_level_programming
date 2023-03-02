#include <stdio.h>

/**
 * reverse_array - Entry point
 * @a: pointer to the int array
 * @n: length of the array
 *
 * Description: reverse the contents of an
 * integer array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
