#include "main.h"

/**
 * print_array - prints elements
 * @a: the pointer of the array
 * @n: number of elements to print
 *
 * Description: prints n number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	while (i <= n - 1)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);

		i++;
	}
}
