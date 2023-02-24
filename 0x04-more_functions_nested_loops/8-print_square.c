#include "main.h"

/**
 * print_square - print square
 * @n: the size of the square
 *
 * Description: printing a square with #
 *
 * Return: void
 */

void print_square(int n)
{
	int c = 1, b;

	if (n < 1)
		_putchar('\n');

	while (c <= n)
	{
		b = 1;

		while (b <= n)
		{
			_putchar('#');

			b++;
		}

		_putchar('\n');
		c++;
	}
}
