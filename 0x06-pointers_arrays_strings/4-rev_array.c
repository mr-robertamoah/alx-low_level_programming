#include <stdio.h>

/**
 * reverse_array - reverse
 * @a: pointer to the array
 * @n: length of te array
 *
 * Description: this reverses contents of an int array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
