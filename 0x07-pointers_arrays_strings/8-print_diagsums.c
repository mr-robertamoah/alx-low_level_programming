#include <stdio.h>

/**
 * print_diagsums - print
 * @a: pointer to array
 * @size: the size of the array
 *
 * Description: sum the diagonals of the matrix
 * chars c in s
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0,  diag1 = 0, diag2 = 0;
	int len = size * size;

	diag2 = 1 + size;

	for (i = 0; i < len; i++)
	{
		diag1 = size - 1;

		if (i % diag1 == 0 && i != 0 && i != (len - 1))
			sum1 = sum1 + a[i];

		if (i % diag2 == 0)
			sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum2, sum1);
}
